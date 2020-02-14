using System.Collections.Generic;
using Google.Protobuf.Reflection;

namespace GrpcQt.Model
{
    public class MessageModel
    {
        public MessageModel(DescriptorProto descriptorProto, FileModel fileModel)
        {
            DescriptorProto = descriptorProto;
            FileModel = fileModel;
            if (!string.IsNullOrEmpty(fileModel.FileDescriptorProto.Package))
            {
                Qualifier = $"{fileModel.FileDescriptorProto.Package}.{descriptorProto.Name}";
            }
            else
            {
                Qualifier = descriptorProto.Name;
            }
        }
        
        public DescriptorProto DescriptorProto { get; }
        
        public FileModel FileModel { get; }

        public string Qualifier { get; }

        public string CppTypeName => $"Q{DescriptorProto.Name}";

        public string CppTypeNameFullyQualified
        {
            get
            {
                var ns = FileModel.CppNamespace;
                return string.IsNullOrEmpty(ns) ? CppTypeName : $"{ns}::{CppTypeName}";
            }
        }

        public string ProtobufTypeName => DescriptorProto.Name;

        public string ProtobufTypeNameFullyQualified
        {
            get
            {
                var ns = FileModel.CppNamespace;
                return string.IsNullOrEmpty(ns) ? DescriptorProto.Name : $"{ns}::{DescriptorProto.Name}";
            }
        }
        
        public List<PropertyModel> Properties { get; } = new List<PropertyModel>();

        public void WriteCtorDeclarations(CodeWriter writer)
        {
            using (writer.Indent())
            {
                writer.WriteLine($"{CppTypeName}();");
                writer.WriteLine($"{CppTypeName}(QSharedPointer<{ProtobufTypeNameFullyQualified}> message);");
                writer.WriteLine($"~{CppTypeName}();");
            }
        }

        public void WriteCtorImplementation(CodeWriter writer)
        {
            writer.WriteLine($"{CppTypeName}::{CppTypeName}() : _message(new {ProtobufTypeNameFullyQualified}())");
            writer.WriteLine("{");
            writer.WriteLine("}");
            writer.WriteLine($"{CppTypeName}::{CppTypeName}(QSharedPointer<{ProtobufTypeNameFullyQualified}> message) : _message(message)");
            writer.WriteLine("{");
            writer.WriteLine("}");
            writer.WriteLine($"{CppTypeName}::~{CppTypeName}()");
            writer.WriteLine("{");
            writer.WriteLine("}");
        }
    }
}