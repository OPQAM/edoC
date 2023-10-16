namespace ClassesTutorial1
{
    class Program
    {
        static void Main(string[] args)
        {
            //********************************************************//
            // <Class> <variable> = <the Variable()>
            //********************************************************//


            // NumberGuesser numberGuesser = new NumberGuesser(); // this creates an instance of the guesser class

            // instead of using the above line, we can use 'var' and let Visual Studio guess what variable we'll have:

            // create a new instance of our number guesser class
            var numberGuesser = new NumberGuesser();

            // change the default maximum number to 200
            numberGuesser.MaximumNumber = 1000;
            // numberGuesser.CurrentGuessMax = 2; //NOTE: we cannot do this, since we put 'private set' in CurrentGuessMax. It is not allowed. Any changes must exist within the class 'NumberGuesser.cs'

            // ask user to think of a number
            numberGuesser.InformUser();

            // discover the number the user is thinking of
            numberGuesser.DiscoverNumber();

            // announce the results
            numberGuesser.AnnouceResults();

        }
    }
}