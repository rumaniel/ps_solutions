using System;

namespace Baekjoon
{
    class Program
    {
        static void Main()
        {
            string s = Console.ReadLine();
            string[] ss = s.Split();
            int sum = ss.Sum(x => int.Parse(x));
            Console.WriteLine(sum);


        }
    }
}