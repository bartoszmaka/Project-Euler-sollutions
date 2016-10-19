using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    class Program
    {
        static int SumOfFibonaccisUnderFourMillion()
        {
            int a = 0;
            int b = 1;
            int tmp = 0;
            int sum = 0;
            while (b <= 4000000)
            {
                tmp = a;
                a = b;
                b += tmp;
                if (b % 2 == 0) { sum += b; }
            }
            return sum; 
        }
        static void Main(string[] args)
        {
            Console.WriteLine(SumOfFibonaccisUnderFourMillion());
            Console.Read();            
        }
    }
}
