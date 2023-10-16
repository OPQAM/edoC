using System.Diagnostics.Metrics;

namespace ConsoleApp1
{

    /* 
     * Write an app that sums the integers from 1 to 50
     */

    internal class Program
    {
        static void Main(string[] args)
        {
            int summed = 50;
            int counter = 0;
            for(int i = 1; i < summed+1; i++)
            {
                counter += i;
            }

            Console.WriteLine($"The sum of integers from 1 to {summed}: {counter}");

        }
    }
}