namespace Matriz
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[,] matrizA = { { 1, 2 }, { 3, 4 }, { 5, 6 } };

            int[,] matrizB = new int[10, 3];

            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    Console.Write(": ");
                    matrizB[i, j] = int.Parse(Console.ReadLine());

                    // ou: Console.WriteLine(" \t" + matrizB[i, j]);
                }

            }
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    Console.Write(" \t" + matrizB[i, j]);
                }
                Console.WriteLine(); // para dar linha em branco
            }
        }
    }
}