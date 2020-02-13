using Google.Protobuf.Compiler;

namespace GrpcQt
{
    public static class Generator
    {
        public static CodeGeneratorResponse Generate(CodeGeneratorRequest request)
        {
            var response = new CodeGeneratorResponse();
            
            response.File.Add(new CodeGeneratorResponse.Types.File
            {
                Name = "test.txt",
                Content = "sdf"
            });

            return response;
        }
    }
}