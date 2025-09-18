namespace Baekjoon
{
    class Program
    {
        static void Main()
        {
            while (Console.ReadLine() is string input && !input.Equals("EOI"))
            {
                Console.WriteLine(input.IndexOf("nemo", StringComparison.OrdinalIgnoreCase) >= 0 ? "Found" : "Missing");
            }
        }
    }
}