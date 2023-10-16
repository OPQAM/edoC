namespace VariablesAndParsing
{
    class Program
    {
        // Accessibility levels
        private static byte myPrivate;     // Accessed within this program (class)
        protected static byte myProtected; // Accessible within this class and subsidiaries
        public static byte myPublic;       // No access restrictions

        // Different ways to declare variables (members vs properties)
        private byte mMyVariable;
        private static string mCreditCardNumber;

        public static byte MyVariable { get; set; }

        // we added 'static' above to be able to access them inside the main function


        static void Main(string[] args)
        {

            Console.WriteLine("Please enter a number between 1 and 10:");
            string userResponse = Console.ReadLine();

            // Parsing (from string to int)
            int userNumber;
            if (int.TryParse(userResponse, out userNumber))            // we will try to convert our string into an integer. We use try so the program doesn't crash on a failed attempt
            {
                if (userNumber < 1 || userNumber > 10)
                {
                    Console.WriteLine("Sorry, that number is outside of the range.");
                }
                else
                {
                    // userNumber = userNumber * 2    -> same below;
                    userNumber *= 2;

                    Console.WriteLine($"Your new number is {userNumber}.");
                }
            }
            else
            {
                Console.WriteLine("Sorry, that was not a recognized number.");
            }

            Console.WriteLine("Press Enter to close.");
            Console.ReadLine();





        }
    }
}