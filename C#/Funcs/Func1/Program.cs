using System.Numerics;
using System;

namespace Func1
{
    internal class Program
    {

        //            9.Funções:

        //              a) Crie uma função que devolve um vector de inteiros e que recebe 2 parâmetros inteiros. O segundo
        //              parâmetro tem o valor 0 por defeito e o vector a devolver tem o tamanho igual à soma dos 2
        //              inteiros recebidos;


        static void Main(string[] args)
        {
            int n1 = 0;
            int n2 = 0;

            Console.WriteLine("Inserir 2 núneros: ");
            n1 = int.Parse(Console.ReadLine());
            n2 = int.Parse(Console.ReadLine());
            int[] v1 = criacaoVetor(n1, n2);
            Console.WriteLine($"n1: {n1}  , n2: {n2} , tamanho do vetor: {v1.Length}  ");
        }

        public static int[] criacaoVetor(int n1, int n2 = 0)
        {

           
            int[] v = new int[n1 + n2];

            return v;
        }















    }
}
