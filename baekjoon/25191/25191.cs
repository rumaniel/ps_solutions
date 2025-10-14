using System;

namespace Baekjoon
{
    class Program
    {
        static void Main()
        {
            const int requiredColaCount = 2;
            const int requiredBeerCount = 1;

            int chickenCount = Console.ReadLine() is string s1 ? int.Parse(s1) : 0;

            string[] ss = Console.ReadLine().Split();
            int colaConsumableCount = int.Parse(ss[0]) / requiredColaCount;
            int beerConsumableCount = int.Parse(ss[1]) / requiredBeerCount;

            Console.WriteLine(Math.Min(chickenCount, colaConsumableCount + beerConsumableCount));
        }
    }
}
