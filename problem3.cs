using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem3
{
    class Program
    {
        static int[] PrimeFactors(long number)
        {
            List<int> factors = new List<int>();
            while (number != 1)
            {
                for (int i = 1; i <= number; i++)
                {
                    if (number % i == 0)
                    {
                        factors.Add(i);
                        number /= i;
                    }
                }
            }
            // First factor is always going to be 1
            factors.Remove(factors[0]);
            return factors.ToArray();
        }

        static void Main(string[] args)
        {
            int[] factors = PrimeFactors(600851475143);
            Console.WriteLine(factors.Max());
            Console.Read();
        }
    }
}
