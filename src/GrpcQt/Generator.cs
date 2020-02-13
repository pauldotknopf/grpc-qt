using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using Google.Protobuf.Compiler;
using Google.Protobuf.Reflection;
using GrpcQt.Model;
using Humanizer;
using Serilog;

namespace GrpcQt
{
    public static class Generator
    {
        public static CodeGeneratorResponse Generate(CodeGeneratorRequest request)
        {
            var response = new CodeGeneratorResponse();

            var fileModels = new List<FileModel>();
            foreach (var fileDescriptorProto in request.ProtoFile)
            {
                var fileName = fileDescriptorProto.Name;
                while (fileName.EndsWith(".proto"))
                {
                    fileName = fileName.Substring(0, fileName.Length - 6);
                }

                var implCode = "";
                var headerCode = BuildContent(headerWriter =>
                {
                    implCode = BuildContent(implWriter =>
                    {
                        var fileModel = ModelBuilder.BuildModel(fileDescriptorProto);
                        fileModels.Add(fileModel);
                        GenerateFile(fileModel, headerWriter, implWriter);
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
                
                headerFiles.AddRange(fileModels.Select(x => x.IncludeFile));
                sourceFiles.AddRange(fileModels.Select(x => x.ImplFile));
              
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

        private static void GenerateFile(FileModel fileModel, CodeWriter header, CodeWriter impl)
        {
            header.WriteLine($"#ifndef {fileModel.HeaderPragmaName}");
            header.WriteLine($"#define {fileModel.HeaderPragmaName}");
            header.WriteLine("#include <QObject>");
            header.WriteLine("#include <QSharedPointer>");

            impl.WriteLine($"#include \"{fileModel.IncludeFile}\"");
            // Include the C++ generated protobuf types.
            header.WriteLine($"#include \"{fileModel.ProtoIncludeFile}\"");
            
            foreach (var messageModel in fileModel.Messages)
            {
                header.WriteLine($"class {messageModel.TypeName} : public QObject");
                header.WriteLine("{");
                using (header.Indent())
                {
                    header.WriteLine("Q_OBJECT");
                }
                foreach (var property in messageModel.Properties)
                {
                    property.WriteHeaderMetaDeclaration(header);
                }
                
                header.WriteLine("public:");
                messageModel.WriteCtorDeclarations(header);
                messageModel.WriteCtorImplementation(impl);
                
                foreach (var property in messageModel.Properties)
                {
                    property.WriteHeaderDeclaration(header);
                    property.WriteImplementation(impl);
                }
                
                header.WriteLine("private:");
                using (header.Indent())
                {
                    header.WriteLine($"QSharedPointer<{messageModel.ProtobufTypeName}> _message;");
                }
                
                header.WriteLine("};");
            }
            
            header.WriteLine($"#endif // {fileModel.HeaderPragmaName}");
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

        private static PropertyInfo BuildPropertyInfo(FieldDescriptorProto field)
        {
            if(field.Label.HasFlag(FieldDescriptorProto.Types.Label.Repeated))
            {
                return null;
            }
            
            var qType = "";
            switch (field.Type)
            {
                case FieldDescriptorProto.Types.Type.String:
                    qType = "QString";
                    break;
                case FieldDescriptorProto.Types.Type.Bool:
                    qType = "bool";
                    break;
                default:
                    return null;
            }

            return new PropertyInfo
            {
                ProtoField = field,
                QType = qType,
                PropertyName = field.Name.Replace("_", " ").Camelize(),
                Getter = $"get{field.Name.Replace("_", " ").Pascalize()}",
                Setter = $"set{field.Name.Replace("_", " ").Pascalize()}"
            };
        }
        
        private class PropertyInfo
        {
            public FieldDescriptorProto ProtoField { get; set; }
            
            public string QType { get; set; }
            
            public string PropertyName { get; set; }
            
            public string Getter { get; set; }
            
            public string Setter { get; set; }
        }
    }
}