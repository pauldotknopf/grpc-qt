using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text.Json.Serialization;
using System.Threading;
using Google.Protobuf.Compiler;
using Google.Protobuf.Reflection;
using Humanizer;
using Newtonsoft.Json;
using Serilog;

namespace GrpcQt.Model
{
    public class ModelBuilder
    {
        public static List<FileModel> BuildModel(CodeGeneratorRequest codeGeneratorRequest)
        {
            var result = new List<FileModel>();
            
            foreach (var fileDescriptorProto in codeGeneratorRequest.ProtoFile)
            {
                var fileModel = new FileModel(fileDescriptorProto);
                result.Add(fileModel);

                foreach (var messageDescriptorProto in fileDescriptorProto.MessageType)
                {
                    var messageModel = new MessageModel(messageDescriptorProto, fileModel);
                    fileModel.Messages.Add(messageModel);
                }
            }

            foreach (var fileModel in result)
            {
                foreach (var messageModel in fileModel.Messages)
                {
                    foreach (var field in messageModel.DescriptorProto.Field)
                    {
                        if (field.Label.HasFlag(FieldDescriptorProto.Types.Label.Repeated))
                        {
                            continue;
                        }

                        if (field.Options != null && field.Options.Deprecated)
                        {
                            continue;
                        }

                        switch (field.Type)
                        {
                            case FieldDescriptorProto.Types.Type.Bool:
                            case FieldDescriptorProto.Types.Type.String:
                                break;
                            default:
                                continue;
                        }
                        MessageModel referencedMessageType = null;
                        if (field.Type == FieldDescriptorProto.Types.Type.Message)
                        {
                            if (!field.TypeName.StartsWith("."))
                            {
                                throw new NotSupportedException($"Invalid type name: {field.TypeName}");
                            }

                            referencedMessageType = result.SelectMany(x => x.Messages)
                                .SingleOrDefault(x => x.Qualifier == field.TypeName.Substring(1));

                            if (referencedMessageType == null)
                            {
                                throw new NotSupportedException($"Invalid type name: {field.TypeName}");
                            }
                        }
                        
                        var propertyModel = new PropertyModel(messageModel, field, referencedMessageType);
                        messageModel.Properties.Add(propertyModel);
                    }
                }
            }
            
            // if (!string.IsNullOrEmpty(fileDescriptorProto.Package))
            // {
            //     result.Namespace = fileDescriptorProto.Package.Replace(".", "::");
            //     result.NamespaceComponents.AddRange(fileDescriptorProto.Package.Split("."));
            // }
            // result.CreatorTypeName = $"Q{result.FileNameBase.Replace("/", " ").ApplyCase(LetterCasing.Title).Replace(" ", "")}Creator";
            // result.IncludeFile = result.FileNameBase + "-qt.pb.h";
            // result.ImplFile = result.FileNameBase + "-qt.pb.cpp";
            // result.ProtoIncludeFile = result.FileNameBase + ".pb.h";
            //
            // foreach (var messageDescriptorProto in fileDescriptorProto.MessageType)
            // {
            //     var messageModel = new MessageModel(messageDescriptorProto, result);
            //     result.Messages.Add(messageModel);
            //
            //     // if (!string.IsNullOrEmpty(fileDescriptorProto.Package))
            //     // {
            //     //     messageModel.Qualifier = $"{fileDescriptorProto.Package}.{messageDescriptorProto.Name}";
            //     // }
            //     // else
            //     // {
            //     //     messageModel.Qualifier = $"{messageDescriptorProto.Name}";
            //     // }
            //     //
            //     // messageModel.TypeName = $"Q{messageDescriptorProto.Name}";
            //     //
            //     // if (string.IsNullOrEmpty(fileDescriptorProto.Package))
            //     // {
            //     //     messageModel.ProtobufTypeName = messageDescriptorProto.Name;
            //     // }
            //     // else
            //     // {
            //     //     messageModel.ProtobufTypeName = fileDescriptorProto.Package.Replace(".", "::") + "::" + messageDescriptorProto.Name;
            //     // }
            //     //
            //     // foreach (var field in messageDescriptorProto.Field)
            //     // {
            //     //     if (field.Label.HasFlag(FieldDescriptorProto.Types.Label.Repeated))
            //     //     {
            //     //         continue;
            //     //     }
            //     //
            //     //     if (field.Options != null && field.Options.Deprecated)
            //     //     {
            //     //         continue;
            //     //     }
            //     //
            //     //     var name = field.Name.Replace("_", " ").Camelize();
            //     //     var getter = $"get{field.Name.Replace("_", " ").Pascalize()}";
            //     //     var setter = $"set{field.Name.Replace("_", " ").Pascalize()}";
            //     //
            //     //     var property = new PropertyModel
            //     //     {
            //     //         Message = messageModel,
            //     //         Name = name,
            //     //         FieldDescriptorProto = field,
            //     //         Getter = getter,
            //     //         Setter = setter
            //     //     };
            //     //     
            //     //     switch (field.Type)
            //     //     {
            //     //         case FieldDescriptorProto.Types.Type.String:
            //     //         case FieldDescriptorProto.Types.Type.Bool:
            //     //             messageModel.Properties.Add(property);
            //     //             break;
            //     //         case FieldDescriptorProto.Types.Type.Message:
            //     //             property.TypeName = field.TypeName;
            //     //             messageModel.Properties.Add(property);
            //     //             break;
            //     //     }
            //     // }
            // }
            //
            
            
            return result;
        }
    }
}