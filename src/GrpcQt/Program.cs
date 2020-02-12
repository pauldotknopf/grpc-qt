using System;
using System.Diagnostics;
using System.Threading;
using Google.Protobuf;
using Google.Protobuf.Compiler;

namespace GrpcQt
{
    class Program
    {
        static void Main(string[] args)
        {
            try
            {
                while (!Debugger.IsAttached)
                {
                    Thread.Sleep(1000);
                }
                Debugger.Break();

                using (var stdin = Console.OpenStandardInput())
                using (var stdout = Console.OpenStandardOutput())
                {
                    var request = CodeGeneratorRequest.Parser.ParseFrom(stdin);
                    var response = new CodeGeneratorResponse();
                    response.WriteTo(new CodedOutputStream(stdout, true));
                }
            }
            catch (Exception ex)
            {
                Console.Error.WriteLine(ex);
                Environment.Exit(1);
            }
        }
    }
}
