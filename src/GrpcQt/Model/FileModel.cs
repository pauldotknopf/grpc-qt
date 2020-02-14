using System.Collections.Generic;

namespace GrpcQt.Model
{
    public class FileModel
    {
        public string Namespace { get; set; }
        
        public List<string> NamespaceComponents { get; } = new List<string>();
        
        public string CreatorTypeName { get; set; }
        
        public string HeaderPragmaName { get; set; }
        
        public string FileNameBase { get; set; }
        
        public string IncludeFile { get; set; }
        
        public string ProtoIncludeFile { get; set; }
        
        public string ImplFile { get; set; }
        
        public List<MessageModel> Messages { get; set; } = new List<MessageModel>();
    }
}