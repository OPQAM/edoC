using System.Runtime.InteropServices;
using System.Runtime.Intrinsics.X86;
using System;
using System.Drawing;
using System.Diagnostics;
using System.Numerics;
using System.Runtime.ExceptionServices;
using System.Linq.Expressions;
using System.Text;

namespace PL1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //            1.Crie um programa em C# do tipo console application;
            //            2.No método main, crie variáveis dos seguintes tipos:
            //            a) Inteiro com o valor 33;
            int x = 33;

            //            b) Booleano com o valor false;
            bool y = false;

            //            c) String com o valor “a minha string”;
            string myString = "a minha string";

            //            d) Double com o valor 5.55;
            double z = 5.55;

            //            e) Char com o valor ‘a’;
            char w = 'a';
            //            f) Float com o valor 2.13;
            float t = 2.13f;

            //            3.Utilize operadores matemáticos para obter os resultados das seguintes operações:
            //            a) 1000 + o valor do inteiro criado em 2.a;
            Console.WriteLine(1000 + x);

            //            b) 1000 – o valor do inteiro criado em 2.a;
            Console.WriteLine(1000 - x);

            //            c) 1000 + o valor do double criado em 2.d;
            Console.WriteLine(1000 + z);

            //            d) 1000 – o valor do float criado em 2.f;
            Console.WriteLine(1000 - t);

            //            e) 1000 / o valor do inteiro criado em 2.a;
            Console.WriteLine(1000 / x);

            //            f) 1000 * o valor do inteiro criado em 2.a;
            Console.WriteLine(1000 * x);

            //            g) 1000 % o valor do inteiro criado em 2.a;
            Console.WriteLine(1000 % x);

            //            h) Incremente o valor do inteiro criado em 2.a em 1 unidade e mostre o resultado antes da operação;
            Console.WriteLine(x);
            x++;  // Alternativamente x+=1; ou ainda x = x + 1;

            //            i) Incremente o valor do inteiro criado em 2.a em 1 unidade e mostre o resultado depois da operação;
            x++;
            Console.WriteLine(x);

            //            j) Decremente o valor do inteiro criado em 2.a em 1 unidade e mostre o resultado antes da operação;
            Console.WriteLine(x);
            x--;

            //            k) Decremente o valor do inteiro criado em 2.a em 1 unidade e mostre o resultado depois da operação;
            x--;
            Console.WriteLine(x);

            //snip//

            //            4.Crie uma condição e analise o resultado do seguinte(escreva na consola se a condição é verdadeira ou
            //            falsa):
            //            a) O valor do booleano criado em 2.b;
            //if (y == false)
            //    Console.WriteLine(false);
            //else Console.WriteLine(true);
            //MAIS SIMPLES:

            Console.WriteLine(y == true);

            //            b) Se o valor do inteiro criado em 2.a é igual a 100;
            if (x == 100)
                Console.WriteLine(true);
            else Console.WriteLine(false);

            // alternativamente:

            Console.WriteLine(x == 100 ? true : false);

            //            c) Se o valor do inteiro criado em 2.a é diferente de 100;

            Console.WriteLine(x != 100 ? true : false);

            //            d) Se o valor do inteiro criado em 2.a é maior que 100;

            Console.WriteLine(x > 100 ? true : false);

            //            e) Se o valor do inteiro criado em 2.a é menor que 100;

            Console.WriteLine(x < 100 ? true : false);

            //            f) Se o valor do inteiro criado em 2.a é maior ou igual a 33;

            Console.WriteLine(x >= 23 ? true : false);

            //            g) Se o valor do inteiro criado em 2.a é menor ou igual a 32;

            Console.WriteLine(x <= 23 ? true : false);

            //            h) Se a soma do inteiro criado em 2.a somado ao valor do float criado em 2.f é maior que 35 e o valor
            //do double criado em 2.d somado a 30 é menor que 35;
            Console.WriteLine(x + t > 35 && (z + 30 < 35) ? true : false);


            //            i) Se a soma do inteiro criado em 2.a somado ao valor do float criado em 2.f é maior que 35 ou o
            //valor do double criado em 2.d somado a 30 é menor que 35;
            Console.WriteLine(x + t > 35 || (z + 30 < 35) ? true : false);

            //snip//

            //            5.Crie um switch que recebe o tamanho da string criada em 2.c e mostre se é par ou impar;
            switch (myString.Length % 2)
            {
                case 0:
                    Console.WriteLine("O número de caracteres do string é par.");
                    break;
                case 1:
                    Console.WriteLine("O número de caracteres do string é ímpar.");
                    break;

                    //snip//

                    //            6.Ciclos:
                    //a) Crie um ciclo for que percorre a string criada em 2.c até encontrar o caracter ‘t’ e mostre qual o
                    //índice do mesmo;
            }


            char target = 't';
            bool found = false;

            for (int i = 0; i < myString.Length; i++)
            {
                if (myString[i] == target)
                {
                    Console.WriteLine($"Elemento encontrado em posição de índice: {i}");
                    found = true;
                }
            }
            if (!found)
            {
                Console.WriteLine("Elemento não encontrado!");
            }


            //b) Crie um ciclo while que recebe um input do utilizador.Enquanto o utilizador não inserir um
            //número maior que 100, permaneça no ciclo;

            while (true)
            {
                Console.WriteLine("Por favor, escolha um número: ");
                string valorEscolhido = Console.ReadLine();

                if (double.TryParse(valorEscolhido, out double valorFinal))
                {
                    if (valorFinal > 100)
                    {
                        break;
                    }
                }
                else
                {
                    Console.WriteLine("Valor inválido.");
                }

            }

            //            c) Faça um random entre 1 e 10.Crie um ciclo do while que decrementa o valor do inteiro criado em
            //2.a até que este seja o valor obtido no random.Escreva na consola o valor que o inteiro tem ao
            //longo das iterações;

            // Criação de instância da classe Random
            Random random = new Random();
            // Gerar número entre 1 e 10
            int numeroAleatorio = random.Next(1, 11);

            while (x != numeroAleatorio)
            {

                Console.WriteLine($"Valor do inteiro x: {x}");
                x--;
            }
            Console.WriteLine($"Valor alvo: {x}");

            //snip//

            //            7.Manipulação de strings:
            //a) Escreva na consola o número de caracteres da string criada em 2.c;

            Console.WriteLine($"A string criada em 2.c tem {myString.Length} caracteres");

            //            b) Adicione à string anterior a string “ criada em C++” utilizando o operador + e o append;

            string tempString = " criada em C++";
            string novaString = myString + tempString;
            Console.WriteLine(novaString);

            // com append (string builder -> 'using System.Text')
            StringBuilder builder = new StringBuilder();
            builder.Append(myString);
            builder.Append(tempString);
            string novaNovaString = builder.ToString();
            Console.WriteLine(novaNovaString);

            //            c) Compare a string anterior com a string “a minha string nova”;

            string mesmoNovaString = "a minha string nova";
            //using string.Equals method...

            if (string.Equals(novaNovaString, mesmoNovaString, StringComparison.OrdinalIgnoreCase))
            {
                Console.WriteLine("As duas strings são iguais.");
            }
            else
            {
                Console.WriteLine("As strings são diferentes.");
            }

            //            d) Utilizando a string criada em 2.c, Encontre o índice onde começa a palavra “string”;

            // usando o método IndexOf...
            string palavra = "string";

            int indexDaPalavra = myString.IndexOf(palavra);

            if (indexDaPalavra != -1)
            {
                Console.WriteLine($"A palavra '{palavra}' começa no índice: {indexDaPalavra}.");
            }
            else
            {
                Console.WriteLine($"A palavra '{palavra}' não foi encontrada na string.");
            }

            //            e) Utilizando a string criada em 2.c, insira a palavra “Criei” no início;

            string palavraDois = "Criei";

            string palavraTres = palavraDois + " " + myString;

            Console.WriteLine(palavraTres);

            // Or through concatenation:

            string palavraQuatro = string.Concat(palavraDois, " ", myString);

            Console.WriteLine(palavraQuatro);
            //            f) Utilizando a string criada em 2.c, substitua a palavra “string” por “frase”;

            // Método Replace:

            string substituir = "string";
            string oNovoSubstituto = "frase";

            string extremamenteNovaPalavra = myString.Replace(substituir, oNovoSubstituto);

            Console.WriteLine(extremamenteNovaPalavra);

            //snip//

            //            8.Vectores e arrays:

            //          Review:

            // fixed-state integer array with X elements:    int[] myArray = new int[X];


            //a) Crie um vector de inteiros;

            Console.WriteLine("\"Por favor indique o número de entradas do meu vetor: ");
            int entries = int.Parse(Console.ReadLine());
            int[] meuVetor = new int[entries];

            //            b) Insira o inteiro criado em 2.a no início do vector;

            meuVetor[0] = x;

            //c) Escreva na consola o valor da primeira posição e o tamanho do vector;

            Console.WriteLine($"O meu vetor tem '{meuVetor[0]}' na primeira posição e um total de {meuVetor.Length} elementos");
            //d) Insira o valor 99 no fim do vector;
            meuVetor[meuVetor.Length - 1] = 99;

            //e) Escreva na consola o valor da última posição e o tamanho do vector; Vou por última..
            Console.WriteLine($"O meu vetor tem '{meuVetor[meuVetor.Length - 1]}' na primeira posição e um total de {meuVetor.Length} elementos");

            //f) Insira o valor 22 na segunda posição do vector;

            meuVetor[1] = 22;

            //g) Escreva na consola o valor da segunda posição e o tamanho do vector;

            Console.WriteLine($"O meu vetor tem '{meuVetor[1]}' na primeira posição e um total de {meuVetor.Length} elementos");

            //h) Crie um array de inteiros com 5 posições com os seguintes valores: 2,7,11,1,6;

            int[] meuSegundoVetor = new int[5];

            meuSegundoVetor[0] = 2;
            meuSegundoVetor[1] = 7;
            meuSegundoVetor[2] = 11;
            meuSegundoVetor[3] = 1;
            meuSegundoVetor[4] = 6;

            //            i) Insira no vector o array criado;

            // Huh? Concatenar arrays?

            // Podemos usar o concat:

            int[] arrayConcatenado = meuVetor.Concat(meuSegundoVetor).ToArray();

            // ou, alternativamente, à papo-seco:

            int tamanho1 = meuVetor.Length;
            int tamanho2 = meuSegundoVetor.Length;
            int tamanhoTotal = tamanho1 + tamanho2;

            int[] arrayCombi = new int[tamanhoTotal];

            for (int i = 0; i < tamanho1; i++)
            {
                arrayCombi[i] = meuVetor[i];
            }
            for (int i = 0; i < tamanho2; i++)
            {
                arrayCombi[tamanho1 + i] = meuSegundoVetor[i];
            }

            // também é coisa esperta, mas mais teclada



            //            j) Retire o valor da última posição do vector;

            int ultimaPosicaoCombi = arrayCombi[tamanhoTotal - 1];

            //k) Escreva na consola o valor da primeira posição e o tamanho do vector;

            Console.WriteLine($"Primeira posição do último vetor: {arrayCombi[0]}. Tamanho do vetor: {tamanhoTotal}.");

            //l) Crie um ciclo que mostre na consola todos os valores do vector;

            for (int i = 0; i < tamanho1; i++)
            {
                Console.WriteLine($"Posição de index: {i}. Valor: {arrayCombi[i]}.");
            }

        }
    }
}