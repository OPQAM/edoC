using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http.Headers;
using System.Text;
using System.Threading.Tasks;

namespace BancoFicha
{
    /// <summary>
    /// Conta class with its automatically set number, the amount, status and its set limit
    /// </summary>
    internal class Conta
    {
        #region Membros de classe Conta
        private static int nexAccountNumber = 1000;
        public int Numero { get; }
        public double Saldo { get; set; }
        public string Estado { get; set; }
        public double Limite { get; set; }
        public List<Movimentacao> Movimentacoes { get; }
        #endregion


        #region Construtores de Conta
        public Conta(double saldo, string estado, double limite)
        {
            Numero = nexAccountNumber++;
            if (saldo < 0)
            {
                throw new ArgumentException("O saldo inicial não pode ser negativo.");
            }
            if (saldo > limite)
            {
                throw new ArgumentException($"O saldo excede o valor máximo de {limite} euros. Por favor, contacte o gerente da conta.");
            }
            Saldo = saldo;
            if (string.Equals(estado, "normal", StringComparison.OrdinalIgnoreCase) ||
    string.Equals(estado, "especial", StringComparison.OrdinalIgnoreCase))
            {
                Estado = estado;
            }
            else
            {
                throw new ArgumentException("o Estado tem que ser 'Normal' ou 'Especial'.");
            }
            Limite = 100000000;
            Movimentacoes = new List<Movimentacao>();
        }
        #endregion


        #region Métodos de Conta

        public void SetSaldo(double initialValue)
        {
            Saldo = initialValue;
        }

        public void SetEstado(string estadoconta)
        {
            Estado = estadoconta;
        }

        public void SetNewLimit(double newLimit)
        {
            Limite = newLimit;
        }
        #endregion
    }

    /// <summary>
    /// A Movimentacao class, which has details about a certain transaction
    /// </summary>
    internal class Movimentacao
    {
        #region Membros de classe Movimentação
        public string Descricao { get; set; }
        public double Valor { get; set; }
        public string Informacao { get; set; }
        #endregion


        #region Construtores de Movimentação
        public Movimentacao(string descricao, double valor, string informacao)
        {
            this.Descricao = descricao;
            this.Valor = valor;
            if (this.Valor <= 0)
            {
                throw new ArgumentException("Valor inválido. Por favor introduza um valor positivo inferior a 2000 euros");
            }
            if (this.Valor > 2000)
            {
                throw new ArgumentException("Valor inválido. Por favor introduza um valor positivo inferior a 2000 euros");

            }
            if (string.Equals(informacao, "crédito", StringComparison.OrdinalIgnoreCase) ||
                string.Equals(informacao, "débito", StringComparison.OrdinalIgnoreCase))
                this.Informacao = informacao;
        }
        #endregion


        #region Métodos de conta
        public void Setdescricao(string novadescricao)
        {
            this.Descricao = novadescricao;
        }

        public void SetValor(double novoValor)
        {
            this.Valor = novoValor;
        }

        public void SetInformacao(string novaInfo)
        {
            this.Informacao = novaInfo;
        }
        #endregion
    }

    /// <summary>
    /// A Banco class, which stores accounts and allows for methods to create and exclude accounts, amongst others
    /// </summary>
    internal class Banco
    {
        #region Membros de classe Banco
        private List<Conta> contas;

        #endregion


        #region Construtor de Banco

        public Banco()
        {
            contas = new List<Conta>();
        }
        #endregion


        #region Métodos de Banco
        // Criar nova conta - método
        public void CriarConta(double saldoInicial, string estado, double limite)
        {
            Conta novaConta = new Conta(saldoInicial, estado, limite);
            contas.Add(novaConta);
        }

        // eliminar conta
        public void ExcluirConta(int numeroConta)
        {
            Conta contaParaRemover = contas.FirstOrDefault(conta => conta.Numero == numeroConta);
            if (contaParaRemover != null)
            {
                contas.Remove(contaParaRemover);
            }
        }

        // Método para levantar dinheiro de conta
        public void Levantamento(int numeroConta, double valor)
        {
            Conta conta = contas.FirstOrDefault(conta => conta.Numero == numeroConta);
            if (conta != null)
            {
                if (valor <= conta.Saldo)
                {
                    conta.Saldo -= valor;
                    // Add a transaction record to Movimentacoes
                    conta.Movimentacoes.Add(new Movimentacao("Levantamento", -valor, "Débito"));
                }
                else
                {
                    Console.WriteLine("Saldo insuficiente para efetuar o levantamento.");
                }
            }
            else
            {
                Console.WriteLine("Conta não encontrada.");
            }
        }

        // Método para efetuar depósito na conta
        public void Deposito(int numeroConta, double valor)
        {
            Conta conta = contas.FirstOrDefault(conta => conta.Numero == numeroConta);
            if (conta != null)
            {
                conta.Saldo += valor;
                // Add a transaction record to Movimentacoes
                conta.Movimentacoes.Add(new Movimentacao("Depósito", valor, "Crédito"));
            }
            else
            {
                Console.WriteLine("Conta não encontrada.");
            }
        }

        // Método para obter o saldo da conta
        public double EmissaoSaldo(int numeroConta)
        {
            Conta conta = contas.FirstOrDefault(conta => conta.Numero == numeroConta);
            if (conta != null)
            {
                return conta.Saldo;
            }
            else
            {
                Console.WriteLine("Conta não encontrada.");
                return 0.0;
            }
        }
        // Método para obter o historial transacional de uma conta
        public List<Movimentacao> Extrato(int numeroConta)
        {
            Conta conta = contas.FirstOrDefault(conta => conta.Numero == numeroConta);
            if (conta != null)
            {
                return conta.Movimentacoes;
            }
            else
            {
                Console.WriteLine("Conta não encontrada.");
                return new List<Movimentacao>();
            }
        }

        // Method to transfer funds between accounts
        public void Transferencia(int contaOrigem, int contaDestino, double valor)
        {
            Conta origem = contas.FirstOrDefault(conta => conta.Numero == contaOrigem);
            Conta destino = contas.FirstOrDefault(conta => conta.Numero == contaDestino);

            if (origem != null && destino != null)
            {
                if (valor <= origem.Saldo)
                {
                    origem.Saldo -= valor;
                    destino.Saldo += valor;

                    // Add transaction records to Movimentacoes for both accounts
                    origem.Movimentacoes.Add(new Movimentacao("Transferência para " + destino.Numero, -valor, "Débito"));
                    destino.Movimentacoes.Add(new Movimentacao("Transferência de " + origem.Numero, valor, "Crédito"));
                }
                else
                {
                    Console.WriteLine("Saldo insuficiente para efetuar a transferência.");
                }
            }
            else
            {
                Console.WriteLine("Conta(s) não encontrada(s).");
            }
        }
        #endregion
    }
}

