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

            for (int i = 0; i < count; i++)
            {
                int n = int.Parse(Console.ReadLine());
                int[] dp = new int[n + 1];

                dp[0] = 1;

                for (int j = 1; j <= n; j++)
                {
                    for (int k = 1; k <= 3; k++)
                    {
                        if (j - k >= 0)
                        {
                            dp[j] += dp[j - k];
                        }
                    }
                }

                Console.WriteLine(dp[n]);
            }

        }
    }
}