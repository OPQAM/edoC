using System.Numerics;

namespace ConsoleApp1
{
    /* Create a console-based app whose Main() method asks the user to input an integer and then
     * calls a method named MultiplicationTable(), which displays the results of multiplying the
     * integer by each of the numbers 2 through 10.
     */


    internal class Program
    {
        static void Main(string[] args)
        {
            // Creating the integer
            Console.WriteLine("Hi user. s.v.p. input an integer.");
            string userInput = Console.ReadLine();
            int integer;

            if (int.TryParse(userInput, out integer))
            {
                // Calling the multiplication table
                MultiplicationTable(integer);
            }
            else
            {
                Console.WriteLine("Unacceptable value. World will dissolve in 3 seconds.");
                Thread.Sleep(1000);
                Console.WriteLine("3");
                Thread.Sleep(1000);
                Console.WriteLine("2");
                Thread.Sleep(1000);
                Console.WriteLine("1");
                Thread.Sleep(1000);
                Console.WriteLine("Thus the world endeth.");
            }


        }

        /// <summary>
        /// Multiplication table method
        /// </summary>
        /// <param name="multiplier"></param>
        static void MultiplicationTable(int multiplier)
        {
            int counter = 2;
            Console.WriteLine("╔═══════════════════════╗");
            Console.WriteLine($"║\t{multiplier}'s Table:\t║");
            Console.WriteLine("╠═══════════════════════╣");
            Console.WriteLine("║\t\t\t║");
            for (int i = 0; i < 9; i++)
            {
                int result = multiplier * counter;
                Console.WriteLine($"║\t{multiplier} x {counter} = {result}\t║");
                counter++;
            }
            Console.WriteLine("╚═══════════════════════╝");
        } 


    }
}