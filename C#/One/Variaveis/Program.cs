using System.IO.Pipes;
using System.Runtime.CompilerServices;

namespace Variaveis
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int contador = 0;
            double x = 4;
            double? y = null; // attributes a nullable double (with the 'value' of null)

            const int z = 10; // this sets the variable to become a constant (unchangeable)
            x = 6;
            // z = 9; -> Can't be done. 'z' isn't a variable anymore
            Console.WriteLine(x);

            Console.Write("Texto1");
            Console.Write("Texto2");
            Console.Write("Texto3");
            Console.Write("Texto4");
            Console.WriteLine();
            Console.WriteLine("Texto nova linha 1");
            Console.WriteLine("Texto nova linha 2");
            Console.WriteLine("Texto nova linha 3");
            string numero;
            numero = Console.ReadLine(); //espera por input do user (string)

            Console.WriteLine(numero);

            double a;
            int b;
            a = 2;

            b = (int)a; //pegamos no valor de a, que é um double e tornamo-lo num inteiro
            Console.WriteLine(b);
            int c = 5;
            int d = 2;
            Console.WriteLine();
            double resultado = c / d; //like integers floor division
            double resultadoDois = (double)c / d; //double division
            Console.WriteLine(resultado);
            Console.WriteLine(resultadoDois);

            //Mais exemplos
            int idade = 32;
            double saldo = 11.24889;
            string nome = "Marco";

            Console.WriteLine("O {0} tem {1} anos de idade e tem saldo igual a {2:F2} euros", nome, idade, saldo);

            // ou

            Console.WriteLine($"O {nome} tem {idade} e {saldo:F2} euros. ");
            Console.WriteLine();

            




        }
    }
}