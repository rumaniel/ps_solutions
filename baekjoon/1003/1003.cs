using System;
using System.Numerics;

namespace Baekjoon
{
    class Program
    {
        struct Point
        {
            public int X;
            public int Y;

            public Point(int x, int y)
            {
                X = x;
                Y = y;
            }
        }

        static readonly List<Point> memArray = new List<Point>() { new Point(1, 0), new Point(0, 1) };

        static void Main()
        {
            string countString = Console.ReadLine();
            string[] ss = countString.Split();
            int count = int.Parse(ss[0]);
            int[] inputArray = new int[count];
            for (int i = 0; i < count; i++)
            {
                inputArray[i] = int.Parse(Console.ReadLine());
            }

            for (int i = 2; i <= inputArray.Max(); i++)
            {
                memArray.Add(new Point(memArray[i - 1].X + memArray[i - 2].X, memArray[i - 1].Y + memArray[i - 2].Y));
            }

            foreach (int n in inputArray)
            {
                Console.WriteLine($"{memArray[n].X} {memArray[n].Y}");
            }
        }
    }
}