using System.Text;

namespace Baekjoon
{
    class Program
    {
        static void Main()
        {
            string s = Console.ReadLine();
            string[] ss = s.Split();
            int input = int.Parse(ss[0]);
            
            StringBuilder sb = new StringBuilder();
            for (int i = 1; i <= input; i++)
            {
                sb.Append(i.ToString());
            }

            int index = sb.ToString().IndexOf(input.ToString()) + 1;

            Console.WriteLine(index);
        }
    }
}