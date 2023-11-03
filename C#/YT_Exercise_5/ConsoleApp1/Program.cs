namespace ConsoleApp1
{

    //Lecture 38:

    //  Write a program that allows a teacher to enter in an amount of students. For each
    //  student ask the teacher to enter in their name and final score for the class.
    //  When the teacher is done entering the data, print the highest grade in the class,
    //  and the avg grade for the class.


    internal class Program
    {
        static void Main(string[] args)
        {

            int students;
            int bestGrade = 0;
            int sumOfValues = 0;

            while (true)
            {
                Console.WriteLine("How many students are in your class?");
                string numberOfStudents = Console.ReadLine();

                if (int.TryParse(numberOfStudents, out students))
                {
                    Console.WriteLine($"Your class has {students} students. Very well.");
                    break;
                }
                else
                {
                    Console.WriteLine("Input is not a valid integer.");
                }
            }


            string[,] myClassArray = new string[students, 2];

            Console.WriteLine();

            //Add students+grade to class
            for (int i = 0; i < students; i++)
            {
                Console.WriteLine("Please enter your student's name:");
                myClassArray[i, 0] = Console.ReadLine();
                Console.WriteLine("Please enter your student's final grade(0-20):");
                myClassArray[i, 1] = Console.ReadLine();
            }


            // Go through the array and see who has the best grade
            for (int i = 0; i < students; i++)
            {
                int grade = int.Parse(myClassArray[i, 1]);
                if (grade > bestGrade)
                {
                    bestGrade = grade;
                }
            }
            Console.WriteLine();
            Console.WriteLine($"The best grade in class was: {bestGrade}");

            // Go through the array and return the avg for the class
            for (int i = 0; i < students; i++)
            {
                    sumOfValues += int.Parse(myClassArray[i, 1]);
            }

            double finalAverage = (double)sumOfValues / students;

            Console.WriteLine();
            Console.WriteLine($"The average grade for your class is {finalAverage}.");
        }
    }
}