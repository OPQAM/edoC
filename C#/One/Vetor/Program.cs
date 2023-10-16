namespace Vetor
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] vetorUm = new int[10];

            int[] vetorDois = { 1, 2, 3, 4 };

            Console.WriteLine(vetorUm.Length);
            Console.WriteLine(vetorDois.Length);

            for (int i = 0; i < 10; i++)
            {
                Console.Write(": ");
                vetorUm[i] = int.Parse(Console.ReadLine());

            }

            for (int i = 0; i < 10; i++)
            {
                Console.Write(" " + vetorUm[i]);
            }
            Console.WriteLine();
        }
    }
}