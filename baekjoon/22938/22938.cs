using System;

namespace Baekjoon
{
    class Program
    {
        static void Main()
        {
            string s = Console.ReadLine();
            string[] firstCircle = s.Split();
            int c1x = int.Parse(firstCircle[0]);
            int c1y = int.Parse(firstCircle[1]);
            int c1r = int.Parse(firstCircle[2]);

            string s2 = Console.ReadLine();
            string[] secondCircle = s2.Split();
            int c2x = int.Parse(secondCircle[0]);
            int c2y = int.Parse(secondCircle[1]);
            int c2r = int.Parse(secondCircle[2]);


            double distance = Math.Sqrt(Math.Pow(c1x - c2x, 2) + Math.Pow(c1y - c2y, 2));

            Console.WriteLine(distance < c1r + c2r ? "YES" : "NO");
        }
    }
}