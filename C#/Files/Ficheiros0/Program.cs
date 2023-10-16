using System.Diagnostics.Metrics;
using System.Globalization;

namespace Ficheiros0
{
    //1.Elabore um programa em linguagem C# que, lê de um ficheiro de texto os vencimentos dos funcionários de uma
    //empresa ("VENCIMENTOS.TXT") e escreve noutro ficheiro os funcionários com vencimentos superior ou igual a
    //1000€ ("SUPMIL.TXT").
    //O ficheiro dos vencimentos contém, em cada linha, o código do funcionários, o nome e o vencimento (valor
    //real), tudo separado por um espaço.
    //O ficheiro resultante deverá conter, em cada linha, o código do funcionários, o nome e o salário do funcionário.
    //No caso do ficheiro (“SUPMIL.TXT”) não possuir registos, deve escrever-se, no seu interior a seguinte
    //mensagem: "não contém registos".


    internal class Program
    {
        static void Main(string[] args)
        {
           StreamReader rd = new StreamReader(@"VENCIMENTOS.txt");
            StreamWriter wr = new StreamWriter(@"SUPMIL.txt");
            int counter = 0;
            while(!rd.EndOfStream)
            {
                // leitura do ficheiro
                string linha = rd.ReadLine();
                // criação da lista de palavras separadas
                string[] palavras = linha.Split(' ');

                if (int.Parse(palavras[2]) >= 1000)
                {
                    counter++;
                    for(int i = 0; i < palavras.Length; i++)
                    {
                        wr.Write(palavras[i] + ' ');  
                    }
                    wr.WriteLine();
                }
            }
            // Caso não haja registos
            if(counter == 0)
            {
                wr.Write("não contém registos");
            }

            wr.Close();
            rd.Close();

            System.Threading.Thread.Sleep(3000);

        }

    }
}



