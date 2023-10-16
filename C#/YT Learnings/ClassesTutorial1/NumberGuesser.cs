using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassesTutorial1
{
    // Exportable comment (summary):

    /// <summary>
    /// Asks the user to guess a number between a certain range and then guesses that number in the fewest possible guesses
    /// </summary>
    public class NumberGuesser
    {
        // 'region' and 'endregion' below allow us to use the '-' sign and collaps thewhole block of code - since we have grouped it together, under the name 'Public Properties'
        #region Public Properties 

        /// <summary>
        /// The largest number we ask the user to guess, between 0 and this number
        /// </summary>
        public int MaximumNumber { get; set; } // get and set turn what was a variable 'maximumNumber' into a pulic property

        /// <summary>
        /// The current number of guesses the compuer has had
        /// </summary>
        public int CurrentNumberOfGuesses { get; private set; }

        // NOTE: why 'private' above? Because we don't want the user to, willy-nilly set whatever value he wants for the current number of guesses.
        //       that value is already set by the program, and shouldn't just be changed at a whim.
        //       So, by setting the set to private, only this very class will be able to set the value.

        /// <summary>
        /// The current known minimum number the user is thinking of
        /// </summary>
        public int CurrentGuessMin { get; private set; }

        /// <summary>
        /// The current known maximum number the user is thinking of
        /// </summary>
        public int CurrentGuessMax { get; private set; }
        #endregion

        #region .ctor


        // 'ctor' + Tab -> create the constructor !!!
        /// <summary>
        /// Default Constructor
        /// </summary>
        public NumberGuesser() // it gets the exact same name of the class, without a return value (constructor => no return value)
        {
            // set default maximum number (can be changed in the main file, since the 'set' is public)
            this.MaximumNumber = 100;
        }
        #endregion

        #region Public Methods
        /// <summary>
        /// Asks the user to think of a number between 0 and a maximum number
        /// </summary>
        public void InformUser()
        {
            Console.WriteLine($"I want you to think of a number between 0 and {this.MaximumNumber}. Ok?");
            Console.ReadLine();
        }

        /// <summary>
        /// Asks the user a series of questions to discover the number they are thinking of
        /// </summary>
        public void DiscoverNumber()
        {
            // clear variables to their initial values before a discovery
            this.CurrentNumberOfGuesses = 0;
            this.CurrentGuessMin = 0;
            this.CurrentGuessMax = this.MaximumNumber / 2;

            while (this.CurrentGuessMin != this.CurrentGuessMax)
            {
                this.CurrentNumberOfGuesses++;

                // Ask the user if their number is between the guess range
                Console.WriteLine($"Is your number between {this.CurrentGuessMin} and {this.CurrentGuessMax}?");
                string response = Console.ReadLine();

                // if the user confirmed their number is within the current range:
                if (response?.ToLower().FirstOrDefault() == 'y')
                {
                    this.MaximumNumber = this.CurrentGuessMax;

                    // change the next guess range to be half of the new maximum range
                    this.CurrentGuessMax = this.CurrentGuessMax - (this.CurrentGuessMax - this.CurrentGuessMin) / 2;
                }
                // The number is greater than guessMax and less than or equal to max
                else
                {
                    this.CurrentGuessMin = this.CurrentGuessMax + 1;

                    int remainingDifference = this.MaximumNumber - this.CurrentGuessMax;

                    this.CurrentGuessMax += (int)Math.Ceiling(remainingDifference / 2f);
                }

                if (this.CurrentGuessMin + 1 == this.MaximumNumber)
                {
                    this.CurrentNumberOfGuesses++;

                    Console.WriteLine($"Is your number {this.CurrentGuessMin}?");
                    response = Console.ReadLine();

                    if (response?.ToLower().FirstOrDefault() == 'y')
                    {
                        break;
                    }
                    else
                    {
                        this.CurrentGuessMin = this.MaximumNumber;
                        break;
                    }
                }
            }
        }

        /// <summary>
        /// Announces the number the user was thinking of and the number of guesses it took
        /// </summary>
        public void AnnouceResults()
        {
            // tell the user their number
            Console.WriteLine($"** Your number is {this.CurrentGuessMin} **");

            // let the user know how many guesses it took
            Console.WriteLine($"Guessed in {this.CurrentNumberOfGuesses} guesses");

            Console.ReadLine();
        }
        #endregion
    }
}