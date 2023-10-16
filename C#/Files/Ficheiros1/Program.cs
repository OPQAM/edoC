using System.Diagnostics.Metrics;
using System.Drawing;
using System.Reflection;

namespace Ficheiros1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            StreamReader rd = new StreamReader(@"NOTAS.txt");
            StreamWriter wr1 = new StreamWriter(@"APROVADOS.txt");
            StreamWriter wr2 = new StreamWriter(@"REPROVADOS.txt");
            int counteraprov = 0;
            int counterrep = 0;
            while (!rd.EndOfStream)
            {
                string linha = rd.ReadLine();
                string[] palavras = linha.Split(' ');

                if (double.Parse(palavras[2]) >= 9.5)
                {
                    counteraprov++;
                    for (int i = 0; i < palavras.Length; i++)
                    {
                        wr1.Write(palavras[i] + ' ');
                    }
                    wr1.WriteLine();
                }
                else if (double.Parse(palavras[2]) < 9.5)
                {
                    counterrep++;
                    for (int i = 0; i < palavras.Length; i++)
                    {
                        wr2.Write(palavras[i] + ' ');
                    }
                    wr2.WriteLine();
                }
            }
            if (counteraprov == 0)
            {
                wr1.Write("não contém registos");
            }
            if (counterrep == 0)
            {
                wr2.Write("não contém registos");
            }

            wr1.Close();
            wr2.Close();
            rd.Close();

            System.Threading.Thread.Sleep(3000);

        }
    }
}

//        2. Elabore um programa em linguagem C# que, lê de um ficheiro de texto as notas de alunos ("NOTAS.TXT") e
//separa para dois ficheiros distintos os aprovados("APROVADOS.TXT") e os reprovados("REPROVADOS.TXT").
//O ficheiro das notas contém, em cada linha, o nº do aluno, o nome e a média(valor real), tudo separado por um
//espaço.
//Os ficheiros resultantes deverão conter, em cada linha, o nº do aluno, o nome e a nota final.
//Um aluno é considerado aprovado quando a sua média final é superior ou igual a 9,5Valores.
//No caso de qualquer um dos ficheiro não possuir registos, deve escrever-se, no seu interior a seguinte
//mensagem: "não contém registos".
