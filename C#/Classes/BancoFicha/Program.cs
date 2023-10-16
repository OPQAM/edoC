namespace BancoFicha
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Banco banco = new Banco();  // criação de instância da classe Banco
            while (true)
            {
                Console.WriteLine("Bem-vindo ao Banco!");
                Console.WriteLine("Escolha uma opção:");
                Console.WriteLine("1. Criar nova conta");
                Console.WriteLine("2. Excluir conta");
                Console.WriteLine("3. Levantamento");
                Console.WriteLine("4. Depósito");
                Console.WriteLine("5. Emissão de saldo");
                Console.WriteLine("6. Extrato");
                Console.WriteLine("7. Transferência");
                Console.WriteLine("8. Sair");

                int choice;
                if (int.TryParse(Console.ReadLine(), out choice))
                {
                    switch (choice)
                    {
                        case 1:
                            // Create a new account
                            Console.Write("Saldo Inicial: ");
                            double saldoInicial = Convert.ToDouble(Console.ReadLine());
                            Console.Write("Estado: ");
                            string estado = Console.ReadLine();
                            Console.Write("Limite: ");
                            double limite = Convert.ToDouble(Console.ReadLine());
                            banco.CriarConta(saldoInicial, estado, limite);
                            Console.WriteLine("Conta criada com sucesso!");
                            break;
                        case 2:
                            // Delete an account
                            Console.Write("Número da Conta a Excluir: ");
                            int numeroContaExcluir = Convert.ToInt32(Console.ReadLine());
                            banco.ExcluirConta(numeroContaExcluir);
                            Console.WriteLine("Conta excluída com sucesso!");
                            break;
                        case 3:
                            // Withdraw money
                            Console.Write("Número da Conta: ");
                            int numeroContaLevantamento = Convert.ToInt32(Console.ReadLine());
                            Console.Write("Valor a Levantar: ");
                            double valorLevantamento = Convert.ToDouble(Console.ReadLine());
                            banco.Levantamento(numeroContaLevantamento, valorLevantamento);
                            break;
                        case 4:
                            // Deposit money
                            Console.Write("Número da Conta: ");
                            int numeroContaDeposito = Convert.ToInt32(Console.ReadLine());
                            Console.Write("Valor a Depositar: ");
                            double valorDeposito = Convert.ToDouble(Console.ReadLine());
                            banco.Deposito(numeroContaDeposito, valorDeposito);
                            break;
                        case 5:
                            // Check balance
                            Console.Write("Número da Conta: ");
                            int numeroContaSaldo = Convert.ToInt32(Console.ReadLine());
                            double saldo = banco.EmissaoSaldo(numeroContaSaldo);
                            Console.WriteLine($"Saldo: {saldo}");
                            break;
                        case 6:
                            // Get account statement
                            Console.Write("Número da Conta: ");
                            int numeroContaExtrato = Convert.ToInt32(Console.ReadLine());
                            List<Movimentacao> extrato = banco.Extrato(numeroContaExtrato);
                            Console.WriteLine("Extrato da Conta:");
                            foreach (Movimentacao mov in extrato)
                            {
                                Console.WriteLine($"Descrição: {mov.Descricao}, Valor: {mov.Valor}, Informação: {mov.Informacao}");
                            }
                            break;
                        case 7:
                            // Transfer funds between accounts
                            Console.Write("Conta de Origem: ");
                            int contaOrigem = Convert.ToInt32(Console.ReadLine());
                            Console.Write("Conta de Destino: ");
                            int contaDestino = Convert.ToInt32(Console.ReadLine());
                            Console.Write("Valor a Transferir: ");
                            double valorTransferencia = Convert.ToDouble(Console.ReadLine());
                            banco.Transferencia(contaOrigem, contaDestino, valorTransferencia);
                            break;
                        case 8:
                            // Exit the program
                            Environment.Exit(0);
                            break;
                        default:
                            Console.WriteLine("Opção inválida. Tente novamente.");
                            break;
                    }
                }
                else
                {
                    Console.WriteLine("Opção inválida. Tente novamente.");
                }

                Console.WriteLine("Pressione Enter para continuar...");
                Console.ReadLine();
                Console.Clear();
            }
        }
    }
}


// Isto é uma ideia. Mas não é o programa a funcionar a 100% - obviamente.