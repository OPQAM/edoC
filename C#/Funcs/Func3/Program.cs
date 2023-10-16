using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Func3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // c) Crie uma função que devolve o tamanho de um array;
            int[] v = new int[8];
            // or int[] v = {1, 2, 3};

            Console.WriteLine($"tamanho: {tamanhoArray(v)}");

        }


        public static int tamanhoArray(int[] v)
        {
            return v.Length;
        }
    }
}
