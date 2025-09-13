using System;

namespace Baekjoon
{
    class Program
    {
        static void Main()
        {
            string[][] ships = new string[][]
            {
                new string[] { "SHIP NAME", "CLASS", "DEPLOYMENT", "IN SERVICE" },
                new string[] { "N2 Bomber", "Heavy Fighter", "Limited", "21" },
                new string[] { "J-Type 327", "Light Combat", "Unlimited", "1" },
                new string[] { "NX Cruiser", "Medium Fighter", "Limited", "18" },
                new string[] { "N1 Starfighter", "Medium Fighter", "Unlimited", "25" },
                new string[] { "Royal Cruiser", "Light Combat", "Limited", "4" }
            };

            foreach (var ship in ships)
            {
                Console.WriteLine("{0,-15}{1,-15}{2,-11}{3,-10}", ship[0], ship[1], ship[2], ship[3]);
            }
        }
    }
}