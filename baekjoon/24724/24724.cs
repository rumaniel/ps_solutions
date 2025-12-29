using System;

namespace Baekjoon
{
    class Program
    {
        static void Main()
        {
            string s = Console.ReadLine();
            string[] ss = s.Split();
            int repeatCount = int.Parse(ss[0]);
            int playCount = 1;

            while (repeatCount-- > 0)
            {

                string input = Console.ReadLine();
                string[] numbers = input.Split();
                int itemCount = int.Parse(numbers[0]);

                string inputRestriction = Console.ReadLine();
                string[] restrictions = inputRestriction.Split();

                while (itemCount-- > 0)
                {
                    string itemInput = Console.ReadLine();
                    string[] itemInfos = itemInput.Split();
                }
                playCount++;
            }

            for (int i = 1; i < playCount; i++)
            {
                Console.WriteLine($"Material Management {i}");
                Console.WriteLine("Classification ---- End!");
            }
        }
    }
}