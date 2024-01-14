namespace ConsoleApp1
{
    /*
     * Write a program for a package delivery service. The program
     * contains an array that holds the ten zip codes to which the
     * company delivers packages. Prompt a user to enter a zip 
     * code and display a message indicating whether the zip code
     * is one to which the company delivers 
     */

    internal class Program
    {
        static void Main(string[] args)
        {
            string[] myArray = { "1900-242", "2500-202", "2500-203", "2500-332", "1000-223", "2300-667", "1023-333", "2700-900", "2300-333", "7000-555" };


            Console.WriteLine("Pray tell which zip code do you want to deliver to:");
            string zipCode = Console.ReadLine();

            bool found = false;

            for (int i = 0; i < myArray.Length; i++)
            {
                if (myArray[i] == zipCode)
                {
                    found = true;
                }
            }

            if (!found)
            {
                Console.WriteLine($"We don't make delivers to Zipcode: {zipCode}. Sorry.");
            }
            else
            {
                Console.WriteLine($"Indeed, we can happily deliver to Zipcode: {zipCode}!");
            }
        }
    }
}