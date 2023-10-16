using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    /// <summary>
    /// Creates a class 'Ponto'
    /// </summary>
    internal class Ponto
    {

        public int X { get; set; }
        public int Y { get; set; }
        public Ponto()
        {

        }
        public Ponto(int x, int y)
        {
            X = x;
            Y = y;
        }
        public Ponto(Ponto p) : this(p.X, p.Y)
        {

        }
        public override string ToString()
        {
            return "Ponto (" + X + "," + Y + ")";
        }
    }
    /// <summary>
    /// Creates a class 'Reta'
    /// </summary>
    internal class Reta
    {
        public Ponto PontoA { get; set; }
        public Ponto PontoB { get; set; }

        public Reta(Ponto pontoA, Ponto pontoB)
        {
            PontoA = pontoA;
            PontoB = pontoB;
        }

        public double declive()
        {
            if(PontoA.X == PontoB.X)
            {
                throw new InvalidOperationException($"Linha vertical (sem declive). Reta: x = {PontoA.X}.");
            }
            return Math.Round((double)(PontoB.Y - PontoA.Y) / (PontoB.X - PontoA.X));
        }

        public double ordenadaOrigem()
        {
            if (PontoA.X == PontoB.X)
            {
                throw new InvalidOperationException($"Linha vertical (sem ordenada na origem). Reta: x = {PontoA.X}.");
            }
            double slope = declive();
            double yInt = PontoA.Y - slope * PontoA.X;
            return yInt;
        }
        public override string ToString()
        {
            if (PontoA.X == PontoB.X)
            {
                throw new InvalidOperationException($"x = {PontoA.X}");
            }
            double roundedSlope = declive();
            double roundedYInt = ordenadaOrigem();

            return $"y = {roundedSlope}x + {roundedYInt}";
        }

    }
}


