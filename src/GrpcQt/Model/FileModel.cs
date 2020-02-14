using System.Collections.Generic;
using System.Linq;
using Google.Protobuf.Reflection;
using Humanizer;

namespace GrpcQt.Model
{
    public class FileModel
    {
        public FileModel(FileDescriptorProto fileDescriptorProto)
        {
            FileDescriptorProto = fileDescriptorProto;
        }
        
        public FileDescriptorProto FileDescriptorProto { get; }

        public string CppNamespace => string.IsNullOrEmpty(FileDescriptorProto.Package) ? "" : FileDescriptorProto.Package.Replace(".", "::");

        public List<string> NamespaceComponents => CppNamespace.Split("::").ToList();

        public string CppCreatorTypeName =>  $"Q{FileNameBase.Replace("/", " ").ApplyCase(LetterCasing.Title).Replace(" ", "")}Creator";
        
        public string HeaderPragmaName => $"{FileDescriptorProto.Name.ToUpper().Replace(".", "").Replace("/", "_")}_H";

        public string FileNameBase
        {
            get
            {
                var fileName = FileDescriptorProto.Name;
                while (fileName.EndsWith(".proto"))
                {
                    fileName = fileName.Substring(0, fileName.Length - 6);
                }
                return fileName;
            }
        }

        public string ProtoIncludeFile => $"{FileNameBase}.pb.h";
        
        public string IncludeFile => $"{FileNameBase}-qt.pb.h";
        
        public string ImplFile => $"{FileNameBase}-qt.pb.cpp";
        
        public List<MessageModel> Messages { get; set; } = new List<MessageModel>();
    }
}