using System;
using Google.Protobuf.Reflection;

namespace GrpcQt.Model
{
    public class PropertyModel
    {
        public MessageModel Message { get; set; }
        
        public string Name { get; set; }

        public string TypeName { get; set; }
        
        public string Getter { get; set; }
        
        public string Setter { get; set; }
        
        public FieldDescriptorProto FieldDescriptorProto { get; set; }

        public void WriteHeaderMetaDeclaration(CodeWriter writer)
        {
            using (writer.Indent())
            {
                writer.WriteLine($"Q_PROPERTY({TypeName} {Name} READ {Getter} WRITE {Setter})");
            }
        }
        
        public void WriteHeaderDeclaration(CodeWriter writer)
        {
            using (writer.Indent())
            {
                writer.WriteLine($"void {Setter}({TypeName} val);");
                writer.WriteLine($"{TypeName} {Getter}();");
            }
        }
        
        public void WriteImplementation(CodeWriter writer)
        {
            writer.WriteLine($"void {Message.TypeName}::{Setter}({TypeName} val)");
            writer.WriteLine("{");
            using (writer.Indent())
            {
                switch (FieldDescriptorProto.Type)
                {
                    case FieldDescriptorProto.Types.Type.String:
                        writer.WriteLine($"_message->set_{FieldDescriptorProto.Name}(val.toStdString());");
                        break;
                    case FieldDescriptorProto.Types.Type.Bool:
                        writer.WriteLine($"_message->set_{FieldDescriptorProto.Name}(val);");
                        break;
                }
            }
            writer.WriteLine("}");
            writer.WriteLine($"{TypeName} {Message.TypeName}::{Getter}()");
            writer.WriteLine("{");
            using (writer.Indent())
            {
                switch (FieldDescriptorProto.Type)
                {
                    case FieldDescriptorProto.Types.Type.String:
                        writer.WriteLine($"return QString::fromStdString(_message->{FieldDescriptorProto.Name}());");
                        break;
                    case FieldDescriptorProto.Types.Type.Bool:
                        writer.WriteLine($"return _message->{FieldDescriptorProto.Name}();");
                        break;
                }
            }
            writer.WriteLine("}");
        }
    }
}