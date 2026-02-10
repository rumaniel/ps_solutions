using System;

namespace Baekjoon
{
    class Program
    {
        static void Main()
        {
            string ns = Console.ReadLine();
            string[] nss = ns.Split();
            int count = int.Parse(nss[0]);

            int[][] arr = new int[count][];

            for (int i = 0; i < count; i++)
            {
                arr[i] = new int[10];
                string ansInput = Console.ReadLine();
                string[] ansInputs = ansInput.Split();
                for (int j = 0; j < 10; j++)
                {
                    arr[i][j] = int.Parse(ansInputs[j]);
                }
            }

            for (int i = 0; i < count; i++)
            {

                for (int j = 0; j < 10; j++)
                {
                    if (arr[i][j] != j % 5 + 1)
                    {
                        break;
                    }

                    if (j == 9)
                    {
                        Console.WriteLine(i + 1);
                        break;
                    }
                }
            }

        }
    }
}