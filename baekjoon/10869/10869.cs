// int.TryParse(args[0], out var aValue);
// int.TryParse(args[1], out var bValue);

// Console.WriteLine(aValue + bValue);
// Console.WriteLine(aValue - bValue);
// Console.WriteLine(aValue * bValue);
// Console.WriteLine(aValue / bValue);
// Console.WriteLine(aValue % bValue);


using System;

namespace Baekjoon
{
    class Program
    {
        static void Main()
        {
            string s = Console.ReadLine();
            string[] ss = s.Split();
            int a = int.Parse(ss[0]);
            int b = int.Parse(ss[1]);

            Console.WriteLine(a + b);
            Console.WriteLine(a - b);
            Console.WriteLine(a * b);
            Console.WriteLine(a / b);
            Console.WriteLine(a % b);
        }
    }
}