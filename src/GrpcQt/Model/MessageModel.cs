using System.Collections.Generic;

namespace GrpcQt.Model
{
    public class MessageModel
    {
        public string TypeName { get; set; }
        
        public string ProtobufTypeName { get; set; }
        
        public List<PropertyModel> Properties { get; } = new List<PropertyModel>();

        public void WriteCtorDeclarations(CodeWriter writer)
        {
            using (writer.Indent())
            {
                writer.WriteLine($"{TypeName}();");
                writer.WriteLine($"~{TypeName}();");
            }
        }

        public void WriteCtorImplementation(CodeWriter writer)
        {
            writer.WriteLine($"{TypeName}::{TypeName}() : _message(new {ProtobufTypeName}())");
            writer.WriteLine("{");
            writer.WriteLine("}");
            writer.WriteLine($"{TypeName}::~{TypeName}()");
            writer.WriteLine("{");
            writer.WriteLine("}");
        }
    }
}