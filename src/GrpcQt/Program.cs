using System;
using System.Diagnostics;
using System.IO;
using System.Threading;
using Google.Protobuf;
using Google.Protobuf.Compiler;
using Serilog;
using Serilog.Events;

namespace GrpcQt
{
    class Program
    {
        static void Main(string[] args)
        {
            // while (!Debugger.IsAttached)
            // {
            //     Thread.Sleep(1000);
            // }
            // Debugger.Break();
            
            Log.Logger = new LoggerConfiguration()
                .WriteTo.Console(standardErrorFromLevel: LogEventLevel.Verbose)
                .CreateLogger();
            
            try
            {
                using (var stdin = Console.OpenStandardInput())
                using (var stdout = Console.OpenStandardOutput())
                {
                    var request = CodeGeneratorRequest.Parser.ParseFrom(stdin);

                    var response = Generator.Generate(request);
                    
                    using (var output = new CodedOutputStream(stdout, true))
                    {
                        response.WriteTo(output);
                    }
                }
            }
            catch (Exception ex)
            {
                Console.Error.WriteLine(ex);
                Environment.Exit(1);
            }
            
            Log.Logger.Information("Ran!");
        }
    }
}
