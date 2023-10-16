namespace ConsoleApp1
{

    /* 
     * Write program that prompts user for hourly rate,
     * but only accepts values between 5.65 and 49.99, included.
     * As long as those values aren't entered, the user must
     * keep on providing input.
     * In the end, the user must b eprovided with a valid hourly rate.
     */


    internal class Program
    {
        static void Main(string[] args)
        {
            double hourlyRate = 0;

            while (hourlyRate > 49.99 || hourlyRate < 5.65)
            {
                Console.WriteLine("What is your hourly pay rate:");
                string input = Console.ReadLine();

                if (double.TryParse(input, out hourlyRate))
                {
                    if (hourlyRate > 49.99 || hourlyRate < 5.65)
                    {
                        Console.WriteLine();
                    }
                }
                else
                {
                    Console.WriteLine("Invalid input.");
                }
            }
            Console.WriteLine($"Hourly Rate accepted: {hourlyRate}");
        }
    }
}