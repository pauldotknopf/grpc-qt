using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using Google.Protobuf.Compiler;
using GrpcQt.Model;
using Newtonsoft.Json;
using Serilog;

namespace GrpcQt
{
    public static class Generator
    {
        public static CodeGeneratorResponse Generate(CodeGeneratorRequest request)
        {
            var response = new CodeGeneratorResponse();

            var fileModels = ModelBuilder.BuildModel(request);
            foreach (var fileModel in fileModels)
            {
                var implCode = "";
                var headerCode = BuildContent(headerWriter =>
                {
                    implCode = BuildContent(implWriter =>
                    {
                        GenerateFile(fileModel, headerWriter, implWriter);
                    });
                });
                
                response.File.Add(new CodeGeneratorResponse.Types.File
                {
                    Name = fileModel.IncludeFile,
                    Content = headerCode
                });
                
                response.File.Add(new CodeGeneratorResponse.Types.File
                {
                    Name = fileModel.ImplFile,
                    Content = implCode
                });
            }

            var additionalHeaders = new List<string>();
            foreach (var fileModel in fileModels)
            {
                var headerContent = BuildContent(header =>
                {
                    header.WriteLine($"#ifndef {fileModel.HeaderPragmaName}_CREATOR");
                    header.WriteLine($"#define {fileModel.HeaderPragmaName}_CREATOR");
                    header.WriteLine("#include <QObject>");
                    header.WriteLine($"#include \"{fileModel.IncludeFile}\"");

                    foreach (var nameSpace in fileModel.NamespaceComponents)
                    {
                        header.WriteLine($"namespace {nameSpace} {{");
                    }
                    
                    header.WriteLine($"class {fileModel.CppCreatorTypeName} : public QObject {{");
                    header.WriteLineIndented("Q_OBJECT");
                    header.WriteLine("public:");
                    using (header.Indent())
                    {
                        header.WriteLine($"{fileModel.CppCreatorTypeName}(QObject* parent = nullptr) : QObject(parent)");
                        header.WriteLine("{");
                        header.WriteLine("}");
                        foreach (var message in fileModel.Messages)
                        {
                            header.WriteLine($"Q_INVOKABLE {message.CppTypeName}* create{message.ProtobufTypeName}()");
                            header.WriteLine("{");
                            header.WriteLineIndented($"return new {message.CppTypeName}();");
                            header.WriteLine("}");
                        }
                    }
                    header.WriteLine("};");
                    
                    foreach (var _ in fileModel.NamespaceComponents)
                    {
                        header.WriteLine("}");
                    }
                    
                    header.WriteLine($"#endif // {fileModel.HeaderPragmaName}_CREATOR");
                });
                response.File.Add(new CodeGeneratorResponse.Types.File
                {
                    Name = fileModel.FileNameBase + "-qt-creator.pb.h",
                    Content = headerContent
                });
                additionalHeaders.Add(fileModel.FileNameBase + "-qt-creator.pb.h");
            }
            
            var pri = BuildContent(writer =>
            {
                writer.WriteLine("INCLUDEPATH += $$PWD");
                
                var headerFiles = new List<string>();
                var sourceFiles = new List<string>();
                
                headerFiles.AddRange(fileModels.Select(x => x.IncludeFile));
                headerFiles.AddRange(additionalHeaders);
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
            header.WriteLine($"#include \"{fileModel.ProtoIncludeFile}\"");
            
            foreach (var nameSpace in fileModel.NamespaceComponents)
            {
                header.WriteLine($"namespace {nameSpace} {{");
            }

            if (!string.IsNullOrEmpty(fileModel.CppNamespace))
            {
                impl.WriteLine($"using namespace {fileModel.CppNamespace};");
            }
            
            foreach (var messageModel in fileModel.Messages)
            {
                header.WriteLine($"class {messageModel.CppTypeName} : public QObject");
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
                    header.WriteLine($"QSharedPointer<{messageModel.ProtobufTypeNameFullyQualified}> _message;");
                }
                
                header.WriteLine("};");
            }
            
            foreach (var _ in fileModel.NamespaceComponents)
            {
                header.WriteLine("}");
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
    }
}