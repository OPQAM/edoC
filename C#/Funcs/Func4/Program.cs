using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;

namespace Func4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //  d) Crie um array de inteiros com o tamanho de 20.Peça ao utilizador um número entre 1 e 10 e
            //  preencha o array com números random entre 1 e 10.Percorra finalmente o array e indique qual
            //  o índice onde estava o número indicado pelo utilizador(utilize funções para as várias tarefas);

            // o array de 20 elementos
            int[] v = new int[20];
            // inicialização do número
            int numero;
            bool validInput = false;
            do
            {
                ----VIDE ISTO!!!
            Console.WriteLine("Por favor introduza um número entre 1 e 10, inclusive:");
            while (true) { 
            numero = int.Parse(Console.ReadLine());
                if (numero < 1 || numero > 10)
                {
                    throw new ArgumentException($"O número que introduziu não é válido ({numero}).")
                }
                if ()

                    -----------

                do
                {
                    Console.Write("Enter a number: ");
                    string input = Console.ReadLine();

                    if (int.TryParse(input, out numero))
                    {
                        validInput = true;
                    }
                    else
                    {
                        Console.WriteLine("Invalid input. Please enter a valid number.");
                    }
                } while (!validInput);
                -------
            }
            // call function and fill with values
            fillRandom(v);

            Console.WriteLine($"Temos um array de 20 elementos. Verificar se há alguma entrada com {numero} (-1 caso não haja):");
            Console.WriteLine();
            System.Threading.Thread.Sleep(2000);

            Console.WriteLine($"Número de entrada: {numero} - Índice da Array: {returnIndex(v, numero)}");
            Console.WriteLine("Verificação final.");
            System.Threading.Thread.Sleep(2000);
            Console.WriteLine($"Array completa: ");
            printArray(v);
        }

        // Function that will generate a random value and fill into the 'v' array
        public static void fillRandom(int[] v)
        {
            Random r = new Random();
            for (int i = 0; i < v.Length; i++)
            {
                v[i] = r.Next(1, 11);
            }
        }

        public static int returnIndex(int[] v, int numero)
        {
            for (int i = 0; i < v.Length; i++)
            {
                if (v[i] == numero)
                {
                    return i;  // but... this will only return the first entry == 'numero'
                }
            }
            return -1; // if the value isn't found
        }

        public static void printArray(int[] v)
        {
            Console.WriteLine();
            Console.Write("{");
            for (int i = 0; i < v.Length; i++)
            {
                Console.Write("[" + v[i] + "]");
            }
            Console.Write("}");
            Console.WriteLine();
        }
    }
}
