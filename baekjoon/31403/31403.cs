using System;

namespace Baekjoon
{
    class Program
    {
        static void Main()
        {
            while (Console.ReadLine() is string s)
            {
                string[] ss = s.Split();
                int a = int.Parse(ss[0]);
                int b = int.Parse(ss[1]);
                int c = int.Parse(ss[2]);
                Console.WriteLine(a + b);
            }
        }
    }
}
