using System;

namespace Baekjoon
{
    class Program
    {
        static void Main()
        {
            string s = Console.ReadLine();
            string[] ss = s.Split();
            int input = int.Parse(ss[0]);

            Console.WriteLine((int)(input * 0.78) + " " + (int)(input * 0.8 + input * 0.2 * 0.78));
        }
    }
}