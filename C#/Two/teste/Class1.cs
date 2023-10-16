using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace teste
{
    internal class ContaCorrente
    {
        public int Numero { get; set; }
        public double Saldo { get; set; }
        public string Estado { get; set; }
        public double Limite { get; set; }
        // Here we need a list to call the 'movimentações'
        public List<Movimentacao> Movimentacoes { get; set; }

        #region Methods for Contacorrente
        /// <summary>
        /// 
        /// </summary>
        #endregion


        // in general List<TypeOfVariable> NameOfList { get ; set; } -> here we'll want Movimentacao type of var


        // the constructor to initialize the Movimentacao list
        public ContaCorrente()
        {
            Movimentacoes = new List<Movimentacao>();

            // in general ListName = new List<TypeOfVariable>();
        }
    }
}
