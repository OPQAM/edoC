using System;
using System.Collections.Generic;
using System.Data.SqlTypes;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Func2
{
    internal class Program
    {

        static void Main(string[] args)
        {
            //              b) Crie uma função que calcula o factorial de um número.
            //              A função devolve o resultado e recebe como parâmetro o número a calcular;

            int num;

            Console.WriteLine("Insira um número: ");
            num = int.Parse(Console.ReadLine());
            Console.WriteLine($"Resultado : {fat(num)}");
        }


        // so, the idea is, this won't break @ num = 1, because if that happens,
        // the for loop won't even run. Therefore f = 1 and that will be returned.

        public static int fat(int num)
        {
            int f = 1;
            for (int i = 2; i <= num; i++)
            {
                f *= i;
            }
            return f;

        }

    }
}
