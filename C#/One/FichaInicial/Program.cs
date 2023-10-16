using System.ComponentModel;
using System.ComponentModel.Design;
using System.Runtime.Intrinsics.Arm;
using System.Runtime.Intrinsics.X86;
using System.Xml.Linq;
using static System.Net.Mime.MediaTypeNames;

namespace FichaInicial
{
    internal class Program
    {
        static void Main(string[] args)
        {

            //1. Crie em linguagem C programas para resolver cada um dos
            //   seguintes problemas utilizando funções, sempre que possível.

            /////////////////////////////////////////////////////////////////////            
            //a. Crie um programa que leia o nome próprio do utilizador e
            //   imprima uma mensagem personalizada do tipo: "Olá João!"
            Console.WriteLine("Qual o seu nome?");
            string nome = Console.ReadLine();
            Console.WriteLine($"Olá, {nome}!");
            //////////////////////////////////////////////////////////////////////
            //b. Altere o programa de modo a que se o nome for "Bartolomeu",
            //   o programa imprima "Dá cá o meu!"
            Console.WriteLine("Qual o seu nome?");
            string nomeDois = Console.ReadLine();
            if(nomeDois == "Bartolomeu")
            {
                Console.WriteLine("Dá cá o meu!");
            } else
            {
                Console.WriteLine($"Olá, {nomeDois}!");
            }
            //////////////////////////////////////////////////////////////////////
            //c.Altere o programa anterior para que a mensagem surja para todos
            //os nomes terminados em "eu".  Exemplo:> Olá Zebedeu! Dá cá o meu!
            Console.WriteLine("Qual o seu nome?");
            string nomeTres = Console.ReadLine();
            if (nomeTres.EndsWith("eu", StringComparison.OrdinalIgnoreCase))
            {
                Console.WriteLine($"Olá {nomeTres}! Dá cá o meu!");
            }
            else
            {
                Console.WriteLine($"Olá, {nomeTres}!");
            }
            //                     --snip--
            //experiência alternativa:
            Console.WriteLine("Qual o seu nome?");
            string nomeQuatro = Console.ReadLine();
            string parteFinal = nomeQuatro.Substring(nomeQuatro.Length - 2);

            if (parteFinal == "eu")
            {
                Console.WriteLine($"Olá {nomeQuatro}! Dá cá o meu!");
            }
            else
            {
                Console.WriteLine($"Olá, {nomeQuatro}!");
            }

            //                     --snip--
            //e ainda (prof):
            Console.Write("Inserir o seu nome:");
            string nomeExtra = Console.ReadLine().ToLower();
            if (nome.EndsWith("eu"))
            {
                Console.WriteLine($" Olá {nomeExtra} ! da ca o meu");
            }
            //////////////////////////////////////////////////////////////////////
            //d. Altere o programa de modo a pedir o nome completo e
            //   apresentar apenas o primeiro e o último nome.
            Console.WriteLine("Qual o seu nome COMPLETO?");
            string nomeCinco = Console.ReadLine();

            string[] partesTexto = nomeCinco.Split(' ');

            string firstName = partesTexto[0];
            string lastName = partesTexto[partesTexto.Length - 1];

            Console.WriteLine($"First name: {firstName}, Last name: {lastName}");
            //////////////////////////////////////////////////////////////////////
            //e. Crie uma função que indique qual de três strings introduzidas
            //   pelo utilizador tem um comprimento superior.
            Console.WriteLine("Crie três strings: ");
            Console.WriteLine("String 1: ");
            string stringOne = Console.ReadLine();
            Console.WriteLine("String 2: ");
            string stringTwo = Console.ReadLine();
            Console.WriteLine("String 3: ");
            string stringThree = Console.ReadLine();

            int lengthOne = stringOne.Length;
            int lengthTwo = stringTwo.Length;
            int lengthThree = stringThree.Length;

            int[] sizeComparison = { lengthOne, lengthTwo, lengthThree };

            int maximum = sizeComparison[0];
            int indexer = 0;

            for (int i = 0; i < sizeComparison.Length; i++)
            {
                if (sizeComparison[i] > maximum)
                {
                    maximum = sizeComparison[i];
                    indexer = i;
                    
                }
            }
            if (indexer == 0)
            {
                Console.WriteLine(stringOne);
            } else if (indexer == 1) {
                Console.WriteLine(stringTwo);
            } else {
                Console.WriteLine(stringThree);
            }
            //////////////////////////////////////////////////////////////////////
            //f.Crie uma função que receba um vector de strings como argumento
            //  e retorne um valor booleano indicando se todas as strings
            //  têm o mesmo comprimento.


            //////////////////////////////////////////////////////////////////////
            //g.Crie uma função que receba um vector de strings como 
            //  argumento e retorne um valor inteiro
            //  correspondendo à soma de todos os comprimentos das strings.


            //////////////////////////////////////////////////////////////////////
            //h.Crie uma função que, numa string substitua todas as letras 
            //  “v” por “b” e todas as ocorrências de “ão” por “om”.


            //////////////////////////////////////////////////////////////////////
            //i.Crie uma função para verificar se uma string é constituída 
            //  apenas por algarismos. A função deverá
            //  retornar um valor booleano true neste caso.


            //////////////////////////////////////////////////////////////////////
            //j.Crie uma função que receba uma string como argumento e retorne
            //  true se a string não contiveralgarismos.


            //////////////////////////////////////////////////////////////////////
            //k.Crie uma função que leia 2 strings do utilizador e indique qual
            //  das strings está primeiro na ordem alfabética.


            //////////////////////////////////////////////////////////////////////
            //l.Crie uma função que leia 10 nomes para um vector de strings e
            //  os ordene alfabeticamente na saída.


            //////////////////////////////////////////////////////////////////////
            //m.Crie um jogo com 10 advinhas do tipo 
            //  "Qual a cor do cavalo branco do Napoleão?", cada uma com 3
            //  alternativas, apresentando o resultado final.

            
            //////////////////////////////////////////////////////////////////////
            //n.Crie um programa para verificar se uma string é um palíndromo.


            //////////////////////////////////////////////////////////////////////
        }
    }
}