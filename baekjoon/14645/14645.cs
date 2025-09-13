namespace Baekjoon
{
    class Program
    {
        static void Main()
        {
            string s = Console.ReadLine();
            string[] ss = s.Split();
            int n = int.Parse(ss[0]);

            while (Console.ReadLine() is string useless && n > 1)
            {
                n--;
            }
            Console.WriteLine("비와이");

        }
    }
}