using System;
using System.Collections.Generic;
using System.IO;
using Google.Protobuf.Reflection;
using Humanizer;
using Newtonsoft.Json;

namespace GrpcQt.Model
{
    public class PropertyModel
    {
        public PropertyModel(MessageModel messageModel, FieldDescriptorProto fieldDescriptorProto, MessageModel referencedMessageModel)
        {
            MessageModel = messageModel;
            FieldDescriptorProto = fieldDescriptorProto;
            ReferencedMessageModel = referencedMessageModel;
        }
        
        // The message containing this property.
        public MessageModel MessageModel { get; }
        
        // The field that this property represents.
        public FieldDescriptorProto FieldDescriptorProto { get; }
        
        // If this field type is a reference to another message, this is that definition.
        public MessageModel ReferencedMessageModel { get; }
        
        public string Name => FieldDescriptorProto.Name.Replace("_", " ").Camelize();

        public string Getter => $"get{FieldDescriptorProto.Name.Replace("_", " ").Pascalize()}";
        
        public string Setter => $"set{FieldDescriptorProto.Name.Replace("_", " ").Pascalize()}";
        
        public string Filler => $"fill{FieldDescriptorProto.Name.Replace("_", " ").Pascalize()}";
        
        public void WriteHeaderMetaDeclaration(CodeWriter writer)
        {
            using (writer.Indent())
            {
                switch (FieldDescriptorProto.Type)
                {
                    case FieldDescriptorProto.Types.Type.Bool:
                        writer.WriteLine($"Q_PROPERTY(bool {Name} READ {Getter} WRITE {Setter})");
                        break;
                    case FieldDescriptorProto.Types.Type.String:
                        writer.WriteLine($"Q_PROPERTY(QString {Name} READ {Getter} WRITE {Setter})");
                        break;
                    case FieldDescriptorProto.Types.Type.Message:
                        // Message properties aren't exposed as actual properties.
                        break;
                    default:
                        throw new NotSupportedException($"Invalid type: {FieldDescriptorProto.Type}");
                }
            }
        }
        
        public void WriteHeaderDeclaration(CodeWriter writer)
        {
            using (writer.Indent())
            {
                switch (FieldDescriptorProto.Type)
                {
                    case FieldDescriptorProto.Types.Type.Bool:
                        writer.WriteLine($"void {Setter}(bool val);");
                        writer.WriteLine($"bool {Getter}();");
                        break;
                    case FieldDescriptorProto.Types.Type.String:
                        writer.WriteLine($"void {Setter}(QString val);");
                        writer.WriteLine($"QString {Getter}();");
                        break;
                    case FieldDescriptorProto.Types.Type.Message:
                        writer.WriteLine($"Q_INVOKABLE void {Filler}();");
                        writer.WriteLine($"Q_INVOKABLE void {Setter}({ReferencedMessageModel.CppTypeNameFullyQualified}* val);");
                        writer.WriteLine($"Q_INVOKABLE {ReferencedMessageModel.CppTypeNameFullyQualified}* {Getter}();");
                        break;
                    default:
                        throw new NotSupportedException($"Invalid type: {FieldDescriptorProto.Type}");
                }
               
            }
        }
        
        public void WriteImplementation(CodeWriter writer)
        {
            switch (FieldDescriptorProto.Type)
            {
                case FieldDescriptorProto.Types.Type.Bool:
                    writer.WriteLine($"void {MessageModel.CppTypeName}::{Setter}(bool val)");
                    writer.WriteLine("{");
                    writer.WriteLineIndented($"_message->set_{FieldDescriptorProto.Name}(val);");
                    writer.WriteLine("}");
                    writer.WriteLine($"bool {MessageModel.CppTypeName}::{Getter}()");
                    writer.WriteLine("{");
                    writer.WriteLineIndented($"return _message->{FieldDescriptorProto.Name}();");
                    writer.WriteLine("}");
                    break;
                case FieldDescriptorProto.Types.Type.String:
                    writer.WriteLine($"void {MessageModel.CppTypeName}::{Setter}(QString val)");
                    writer.WriteLine("{");
                    writer.WriteLineIndented($"_message->set_{FieldDescriptorProto.Name}(val.toStdString());");
                    writer.WriteLine("}");
                    writer.WriteLine($"QString {MessageModel.CppTypeName}::{Getter}()");
                    writer.WriteLine("{");
                    writer.WriteLineIndented($"return QString::fromStdString(_message->{FieldDescriptorProto.Name}());");
                    writer.WriteLine("}");
                    break;
                case FieldDescriptorProto.Types.Type.Message:
                    writer.WriteLine($"void {MessageModel.CppTypeName}::{Filler}()");
                    writer.WriteLine("{");
                    writer.WriteLineIndented($"_message->set_allocated_{FieldDescriptorProto.Name}(new {ReferencedMessageModel.ProtobufTypeNameFullyQualified}());");
                    writer.WriteLine("}");
                    writer.WriteLine($"void {MessageModel.CppTypeName}::{Setter}({ReferencedMessageModel.CppTypeNameFullyQualified}* val)");
                    writer.WriteLine("{");
                    using (writer.Indent())
                    {
                        writer.WriteLine($"if (val) {{ _message->set_allocated_{FieldDescriptorProto.Name}(val->getInnerMessage()); }} else {{ _message->clear_{FieldDescriptorProto.Name}(); }}");
                    }
                    writer.WriteLine("}");
                    writer.WriteLine($"{ReferencedMessageModel.CppTypeNameFullyQualified}* {MessageModel.CppTypeName}::{Getter}()");
                    writer.WriteLine("{");
                    using (writer.Indent())
                    {
                        writer.WriteLine($"if(!_message->has_{FieldDescriptorProto.Name}()) {{ return nullptr; }}");
                        writer.WriteLine($"auto val = _message->{FieldDescriptorProto.Name}();");
                        writer.WriteLine($"auto result = new {ReferencedMessageModel.ProtobufTypeNameFullyQualified}();");
                        writer.WriteLine("result->CopyFrom(val);");
                        writer.WriteLine($"return new {ReferencedMessageModel.CppTypeNameFullyQualified}(QSharedPointer<{ReferencedMessageModel.ProtobufTypeNameFullyQualified}>(result));");
                    }
                    writer.WriteLine("}");
                    break;
            }
        }
    }
}