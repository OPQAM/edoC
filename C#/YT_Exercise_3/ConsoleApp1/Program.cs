namespace ConsoleApp1
{


    /*
     * Random number generator: with user (3) guesses
     */

    internal class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("Let's try to guess a number between 1 and 10!\nYou have 3 attempts.");

            //the attempts at guessing
            int counter = 0;

            //generating a random number between 1 and 10
            Random randomGenerator = new Random();
            int randomNumber = randomGenerator.Next(1, 11);

            while (counter < 3)
            {

                int guess = 0;
                Console.WriteLine("Enter your guess: ");

                string input = Console.ReadLine();

                if (int.TryParse(input, out guess))
                {
                    if (guess > randomNumber && guess <= 10)
                    {
                        Console.WriteLine("Value too high!");
                        counter++;

                    }
                    else if (guess < randomNumber && guess >= 1)
                    {
                        Console.WriteLine("Value too low!");
                        counter++;
                    }
                    else if (guess == randomNumber)
                    {
                        counter++;
                        Console.WriteLine($"Well done, you win! The number was, in fact {guess}.\nAttempts: {counter}.");
                        return;
                    }
                    // taking care of out of bounds stuff
                    else
                    {
                        Console.WriteLine("Out of bounds.\nValues must be between 1 and 10.");
                    }
                }
                else
                {
                    // if the try fails - which means that the value isn't an integer
                    Console.WriteLine("Invalid Input.");
                }
            }

            // this will only run if the while wasn't successful
            Console.WriteLine($"You failed! The number was {randomNumber}."); 
        }
    }
}