using System;
using System.Diagnostics;
using System.Threading;
using Google.Protobuf.Reflection;
using Humanizer;
using Serilog;

namespace GrpcQt.Model
{
    public class ModelBuilder
    {
        public static FileModel BuildModel(FileDescriptorProto fileDescriptorProto)
        {
            var result = new FileModel();
            result.HeaderPragmaName = $"{fileDescriptorProto.Name.ToUpper().Replace(".", "").Replace("/", "_")}_H";

            Log.Warning(fileDescriptorProto.Name);
            
            {
                var fileName = fileDescriptorProto.Name;
                while (fileName.EndsWith(".proto"))
                {
                    fileName = fileName.Substring(0, fileName.Length - 6);
                }
                result.FileNameBase = fileName;
            }

            if (!string.IsNullOrEmpty(fileDescriptorProto.Package))
            {
                result.Namespace = fileDescriptorProto.Package.Replace(".", "::");
                result.NamespaceComponents.AddRange(fileDescriptorProto.Package.Split("."));
            }
            result.CreatorTypeName = $"Q{result.FileNameBase.Replace("/", " ").ApplyCase(LetterCasing.Title).Replace(" ", "")}Creator";
            result.IncludeFile = result.FileNameBase + "-qt.pb.h";
            result.ImplFile = result.FileNameBase + "-qt.pb.cpp";
            result.ProtoIncludeFile = result.FileNameBase + ".pb.h";

            foreach (var messageDescriptorProto in fileDescriptorProto.MessageType)
            {
                var messageModel = new MessageModel();
                result.Messages.Add(messageModel);

                messageModel.TypeName = $"Q{messageDescriptorProto.Name}";
                
                if (string.IsNullOrEmpty(fileDescriptorProto.Package))
                {
                    messageModel.ProtobufTypeName = messageDescriptorProto.Name;
                }
                else
                {
                    messageModel.ProtobufTypeName = fileDescriptorProto.Package.Replace(".", "::") + "::" + messageDescriptorProto.Name;
                }
                
                foreach (var field in messageDescriptorProto.Field)
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
                        case FieldDescriptorProto.Types.Type.String:
                            messageModel.Properties.Add(new PropertyModel
                            {
                                Message = messageModel,
                                Name = field.Name.Replace("_", " ").Camelize(),
                                TypeName = "QString",
                                FieldDescriptorProto = field,
                                Getter = $"get{field.Name.Replace("_", " ").Pascalize()}",
                                Setter = $"set{field.Name.Replace("_", " ").Pascalize()}"
                            });
                            break;
                        case FieldDescriptorProto.Types.Type.Bool:
                            messageModel.Properties.Add(new PropertyModel
                            {
                                Message = messageModel,
                                Name = field.Name.Replace("_", " ").Camelize(),
                                TypeName = "bool",
                                FieldDescriptorProto = field,
                                Getter = $"get{field.Name.Replace("_", " ").Pascalize()}",
                                Setter = $"set{field.Name.Replace("_", " ").Pascalize()}"
                            });
                            break;
                    }
                }
            }
            
            return result;
        }
    }
}