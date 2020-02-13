using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using Google.Protobuf.Compiler;
using Google.Protobuf.Reflection;
using Serilog;

namespace GrpcQt
{
    public static class Generator
    {
        public static CodeGeneratorResponse Generate(CodeGeneratorRequest request)
        {
            var response = new CodeGeneratorResponse();

            foreach (var fileDescriptorProto in request.ProtoFile)
            {
                var fileName = fileDescriptorProto.Name;
                while (fileName.EndsWith(".proto"))
                {
                    fileName = fileName.TrimEnd(".proto".ToCharArray());
                }

                var implCode = "";
                var headerCode = BuildContent(headerWriter =>
                {
                    implCode = BuildContent(implWriter =>
                    {
                        GenerateFile(fileDescriptorProto, fileName, headerWriter, implWriter);
                    });
                });
                
                response.File.Add(new CodeGeneratorResponse.Types.File
                {
                    Name = fileName + "-qt.pb.h",
                    Content = headerCode
                });
                
                response.File.Add(new CodeGeneratorResponse.Types.File
                {
                    Name = fileName + "-qt.pb.cpp",
                    Content = implCode
                });
            }

            var pri = BuildContent(writer =>
            {
                writer.WriteLine("INCLUDEPATH += $$PWD");
                
                var headerFiles = new List<string>();
                var sourceFiles = new List<string>();
                foreach (var file in response.File)
                {
                    Log.Logger.Information(file.Name);
                    if (file.Name.EndsWith("-qt.pb.h"))
                    {
                        headerFiles.Add(file.Name);
                    }

                    if (file.Name.EndsWith("-qt.pb.cpp"))
                    {
                        sourceFiles.Add(file.Name);
                    }
                }

                writer.WriteLine("HEADERS += \\");
                using (writer.Indent())
                {
                    for (var x = 0; x < headerFiles.Count; x++)
                    {
                        writer.WriteLine($"$$PWD/{headerFiles[x]}{((x == headerFiles.Count - 1) ? "" : " \\")}");
                    }
                }
                writer.WriteLine("SOURCES += \\");
                using (writer.Indent())
                {
                    for (var x = 0; x < sourceFiles.Count; x++)
                    {
                        writer.WriteLine($"$$PWD/{sourceFiles[x]}{((x == sourceFiles.Count - 1) ? "" : " \\")}");
                    }
                }
            });
            
            response.File.Add(new CodeGeneratorResponse.Types.File
            {
                Name = "qt.pri",
                Content = pri
            });
            
            return response;
        }

        private static void GenerateFile(FileDescriptorProto fileDescriptorProto, string fileName, CodeWriter header, CodeWriter impl)
        {
            header.WriteLine($"#ifndef {fileDescriptorProto.Name.ToUpper().Replace(".", "").Replace("/", "_")}_H");
            header.WriteLine($"#define {fileDescriptorProto.Name.ToUpper().Replace(".", "").Replace("/", "_")}_H");
            header.WriteLine("#include <QObject>");

            impl.WriteLine($"#include \"{fileName}-qt.pb.h\"");
            
            foreach (var descriptorProto in fileDescriptorProto.MessageType)
            {
                header.WriteLine("");
                var className = $"Q{descriptorProto.Name}";
                header.WriteLine($"class {className} : public QObject");
                header.WriteLine("{");
                using (header.Indent())
                {
                    header.WriteLine("Q_OBJECT");
                }
                
                header.WriteLine("public:");
                using (header.Indent())
                {
                    header.WriteLine($"{className}();");
                    header.WriteLine($"~{className}();");
                }
                
                impl.WriteLine($"{className}::{className}()");
                impl.WriteLine("{");
                impl.WriteLine("}");
                impl.WriteLine($"{className}::~{className}()");
                impl.WriteLine("{");
                impl.WriteLine("}");
                
                header.WriteLine("};");
            }
            
            header.WriteLine($"#endif // {fileDescriptorProto.Name.ToUpper().Replace(".", "").Replace("/", "_")}_H");
        }

        private static string BuildContent(Action<CodeWriter> action)
        {
            using (var memoryStream = new MemoryStream())
            {
                using (var streamWriter = new StreamWriter(memoryStream, Encoding.UTF8, -1, true))
                {
                    action(new CodeWriter(streamWriter));
                }

                memoryStream.Position = 0;

                using (var streamReader = new StreamReader(memoryStream))
                {
                    return streamReader.ReadToEnd();
                }
            }
        }
    }
}