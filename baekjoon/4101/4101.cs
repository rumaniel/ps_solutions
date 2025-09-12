namespace Baekjoon
{
    class Program
    {
        static void Main()
        {
            while (Console.ReadLine() is string s && s.Length > 0)
            {
                string[] ss = s.Split();
                int a = int.Parse(ss[0]);
                int b = int.Parse(ss[1]);

                if (a == 0 && b == 0) break;

                Console.WriteLine(a > b ? "Yes" : "No");
            }

        }
    }
}