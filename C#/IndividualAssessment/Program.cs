using System;

namespace GestaoFuncionarios
{
    class Program
    {
        static void Main(string[] args)
        {

            // Create an instance of the Empresa class
            Empresa empresa = new Empresa();

            #region Atuais Membros da Empresa (aqui)
            Diretor diretor1 = new Diretor("Bob Marley", 15000, "Marketing");
            empresa.AddDiretor(diretor1.Nome, diretor1.Salario, diretor1.Departamento);
            Diretor diretor2 = new Diretor("Alice Johnson", 16000, "Financeiro");
            empresa.AddDiretor(diretor2.Nome, diretor2.Salario, diretor2.Departamento);
            Diretor diretor3 = new Diretor("John Smith", 17000, "Recursos Humanos");
            empresa.AddDiretor(diretor3.Nome, diretor3.Salario, diretor3.Departamento);
            Diretor diretor4 = new Diretor("Emily Davis", 18000, "Tecnologia da Informação");
            empresa.AddDiretor(diretor4.Nome, diretor4.Salario, diretor4.Departamento);
            Diretor diretor5 = new Diretor("Daniel Rodriguez", 19000, "Produção");
            empresa.AddDiretor(diretor5.Nome, diretor5.Salario, diretor5.Departamento);
            Engenheiro engenheiro1 = new Engenheiro("Laura Turner", 12000, "Engenharia Civil", "John Doe", "Projeto A");
            empresa.AddEngenheiro(engenheiro1.Nome, engenheiro1.Salario, engenheiro1.Departamento, engenheiro1.Gestor, engenheiro1.Projeto);
            Engenheiro engenheiro2 = new Engenheiro("Michael Johnson", 13000, "Engenharia Mecânica", "Jane Smith", "Projeto B");
            empresa.AddEngenheiro(engenheiro2.Nome, engenheiro2.Salario, engenheiro2.Departamento, engenheiro2.Gestor, engenheiro2.Projeto);
            Engenheiro engenheiro3 = new Engenheiro("Emma Davis", 14000, "Engenharia Elétrica", "David Brown", "Projeto C");
            empresa.AddEngenheiro(engenheiro3.Nome, engenheiro3.Salario, engenheiro3.Departamento, engenheiro3.Gestor, engenheiro3.Projeto);
            Engenheiro engenheiro4 = new Engenheiro("Christopher Miller", 15000, "Engenharia de Software", "Jennifer White", "Projeto D");
            empresa.AddEngenheiro(engenheiro4.Nome, engenheiro4.Salario, engenheiro4.Departamento, engenheiro4.Gestor, engenheiro4.Projeto);
            Engenheiro engenheiro5 = new Engenheiro("Olivia Wilson", 16000, "Engenharia Química", "Matthew Anderson", "Projeto E");
            empresa.AddEngenheiro(engenheiro5.Nome, engenheiro5.Salario, engenheiro5.Departamento, engenheiro5.Gestor, engenheiro5.Projeto);
            Assistente assistente1 = new Assistente("Sophia Adams", 8000, "Administração", "Projeto X");
            empresa.AddAssistente(assistente1.Nome, assistente1.Salario, assistente1.Departamento, assistente1.Projeto);
            Assistente assistente2 = new Assistente("Ethan Wilson", 8500, "Financeiro", "Projeto Y");
            empresa.AddAssistente(assistente2.Nome, assistente2.Salario, assistente2.Departamento, assistente2.Projeto);
            Assistente assistente3 = new Assistente("Ava Miller", 9000, "Recursos Humanos", "Projeto Z");
            empresa.AddAssistente(assistente3.Nome, assistente3.Salario, assistente3.Departamento, assistente3.Projeto);
            Assistente assistente4 = new Assistente("Logan Smith", 9500, "TI", "Projeto W");
            empresa.AddAssistente(assistente4.Nome, assistente4.Salario, assistente4.Departamento, assistente4.Projeto);
            Assistente assistente5 = new Assistente("Isabella Davis", 10000, "Produção", "Projeto V");
            empresa.AddAssistente(assistente5.Nome, assistente5.Salario, assistente5.Departamento, assistente5.Projeto);
            Assistente assistente6 = new Assistente("Mia Johnson", 10500, "Marketing", "Projeto U");
            empresa.AddAssistente(assistente6.Nome, assistente6.Salario, assistente6.Departamento, assistente6.Projeto);
            Assistente assistente7 = new Assistente("Lucas Anderson", 11000, "Administração", "Projeto T");
            empresa.AddAssistente(assistente7.Nome, assistente7.Salario, assistente7.Departamento, assistente7.Projeto);
            Assistente assistente8 = new Assistente("Olivia Brown", 11500, "Financeiro", "Projeto S");
            empresa.AddAssistente(assistente8.Nome, assistente8.Salario, assistente8.Departamento, assistente8.Projeto);
            Assistente assistente9 = new Assistente("Liam White", 12000, "Recursos Humanos", "Projeto R");
            empresa.AddAssistente(assistente9.Nome, assistente9.Salario, assistente9.Departamento, assistente9.Projeto);
            Assistente assistente10 = new Assistente("Emma Turner", 12500, "TI", "Projeto Q");
            empresa.AddAssistente(assistente10.Nome, assistente10.Salario, assistente10.Departamento, assistente10.Projeto);
            #endregion

            // Main menu loop
            while (true)
            {
                // Display menu options to the user
                Console.WriteLine("╔═════════════════════════════════════╗");
                Console.WriteLine("║                MENU                 ║");
                Console.WriteLine("║       Gestão de Funcionários        ║");
                Console.WriteLine("╠═════════════════════════════════════╣");
                Console.WriteLine("║ 1. Adicionar Funcionário            ║");
                Console.WriteLine("║ 2. Remover Funcionário              ║");
                Console.WriteLine("║ 3. Editar Funcionário               ║");
                Console.WriteLine("║ 4. Procurar Funcionário por ID      ║");
                Console.WriteLine("║ 5. Relatório do Salário Total       ║");
                Console.WriteLine("║ 6. Funcionário com o Maior Salário  ║");
                Console.WriteLine("║ 7. Listagem de Funcionários         ║");
                Console.WriteLine("║ 0. Sair                             ║");
                Console.WriteLine("╚═════════════════════════════════════╝");
                
                // Get user input
                Console.WriteLine("");
                Console.Write("Escolha uma opção (1-7): ");
                string userInput = Console.ReadLine();

                // Process user input
                switch (userInput)
                {
                    case "1":
                        // Option to Adicionar Funcionário
                        AdicionarFuncionarioMenu(empresa);
                        break;

                    case "2":
                        // Option to Remover Funcionário
                        RemoverFuncionarioMenu(empresa);
                        break;

                    case "3":
                        // Option to Editar Funcionário
                        EditarFuncionarioMenu(empresa);
                        break;

                    case "4":
                        // Option to Procurar Funcionário por ID
                        ProcurarFuncionarioPorIDMenu(empresa);
                        break;

                    case "5":
                        // Option for Relatório do Salário Total
                        empresa.RelatorioSalarioTotal();
                        break;

                    case "6":
                        // Option for Funcionário com o Maior Salário
                        MostrarFuncionarioMaiorSalarioMenu(empresa);
                        break;

                    case "7":
                        // Option to Listar Todos os Funcionários
                        ListarTodosFuncionariosMenu(empresa);
                        break;

                    case "0":
                        // Option to exit the program
                        Console.WriteLine("Saindo do programa. Até logo!");
                        return;

                    default:
                        // Handle invalid input
                        Console.WriteLine("Opção inválida. Tente novamente.");
                        break;
                }

                // Pause to display results and prompt for the next action
                Console.WriteLine("\nPressione qualquer tecla para continuar...");
                Console.ReadKey();
                Console.Clear(); // Clear console for the next iteration
            }
        }

        // Additional methods for handling specific menu options
        private static void AdicionarFuncionarioMenu(Empresa empresa)
        {
            Console.WriteLine("╔═════════════════════════════════════╗");
            Console.WriteLine("║        Adicionar Funcionário        ║");
            Console.WriteLine("╠═════════════════════════════════════╣");
            Console.WriteLine("║ 1. Adicionar Diretor                ║");
            Console.WriteLine("║ 2. Adicionar Engenheiro             ║");
            Console.WriteLine("║ 3. Adicionar Assistente             ║");
            Console.WriteLine("╚═════════════════════════════════════╝");

            Console.WriteLine();
            Console.Write("Escolha o tipo de funcionário a adicionar (1-3): ");
            string userInput = Console.ReadLine();

            switch (userInput)
            {
                case "1":
                    // Adicionar Diretor
                    AdicionarDiretorMenu(empresa);
                    break;

                case "2":
                    // Adicionar Engenheiro
                    AdicionarEngenheiroMenu(empresa);
                    break;

                case "3":
                    // Adicionar Assistente
                    AdicionarAssistenteMenu(empresa);
                    break;

                default:
                    Console.WriteLine("Opção inválida. Tente novamente.");
                    break;
            }
        }

        private static void AdicionarDiretorMenu(Empresa empresa)
        {
            Console.WriteLine();
            Console.Write("Digite o Nome do Diretor: ");
            string nome = Console.ReadLine();

            Console.Write("Digite o Salário do Diretor: ");
            int salario;
            if (!int.TryParse(Console.ReadLine(), out salario))
            {
                Console.WriteLine("Entrada inválida para o salário. Certifique-se de inserir um número inteiro.");
                return;
            }

            Console.Write("Digite o Departamento do Diretor: ");
            string departamento = Console.ReadLine();

            empresa.AddDiretor(nome, salario, departamento);
            Console.WriteLine("Diretor adicionado com sucesso!");
        }

        private static void AdicionarAssistenteMenu(Empresa empresa)
        {
            Console.WriteLine();
            Console.Write("Digite o Nome do Assistente: ");
            string nome = Console.ReadLine();

            Console.Write("Digite o Salário do Assistente: ");
            int salario;
            if (!int.TryParse(Console.ReadLine(), out salario))
            {
                Console.WriteLine("Entrada inválida para o salário. Certifique-se de inserir um número inteiro.");
                return;
            }

            Console.Write("Digite o Departamento do Assistente: ");
            string departamento = Console.ReadLine();

            Console.Write("Digite o Projeto do Assistente: ");
            string projeto = Console.ReadLine();

            empresa.AddAssistente(nome, salario, departamento, projeto);
            Console.WriteLine("Assistente adicionado com sucesso!");
        }

        private static void AdicionarEngenheiroMenu(Empresa empresa)
        {
            Console.WriteLine();
            Console.Write("Digite o Nome do Engenheiro: ");
            string nome = Console.ReadLine();

            Console.Write("Digite o Salário do Engenheiro: ");
            int salario;
            if (!int.TryParse(Console.ReadLine(), out salario))
            {
                Console.WriteLine("Entrada inválida para o salário. Certifique-se de inserir um número inteiro.");
                return;
            }

            Console.Write("Digite o Departamento do Engenheiro: ");
            string departamento = Console.ReadLine();

            Console.Write("Digite o Gestor do Engenheiro: ");
            string gestor = Console.ReadLine();

            Console.Write("Digite o Projeto do Engenheiro: ");
            string projeto = Console.ReadLine();

            empresa.AddEngenheiro(nome, salario, departamento, gestor, projeto);
            Console.WriteLine("Engenheiro adicionado com sucesso!");
        }

        private static void RemoverFuncionarioMenu(Empresa empresa)
        {
            Console.WriteLine("╔═════════════════════════════════════╗");
            Console.WriteLine("║         Remover Funcionário         ║");
            Console.WriteLine("╚═════════════════════════════════════╝");

            Console.WriteLine();
            Console.Write("Digite o ID do funcionário a ser removido: ");

            if (int.TryParse(Console.ReadLine(), out int idFuncionario))
            {
                // Check the type of employee and ask for additional information accordingly
                var (found, funcionarioEditado) = empresa.ProcurarFuncionarioPorID(idFuncionario);
                Console.WriteLine();
                empresa.RemoverFuncionario(idFuncionario);
            }
            else
            {
                Console.WriteLine("Entrada inválida para o ID do funcionário. Certifique-se de inserir um número inteiro.");
            }
        }

        private static void EditarFuncionarioMenu(Empresa empresa)
        {
            Console.WriteLine("╔═════════════════════════════════════╗");
            Console.WriteLine("║          Editar Funcionário         ║");
            Console.WriteLine("╚═════════════════════════════════════╝");

            Console.WriteLine();
            Console.Write("Digite o ID do funcionário a ser editado: ");
            if (int.TryParse(Console.ReadLine(), out int idFuncionario))
            {
                // Declare and initialize the variables here
                string novoNome;
                int novoSalario;
                string novoDepartamento;
                string novoGestor = null; // Initialize to null
                string novoProjeto = null; // Initialize to null

                // Check the type of employee and ask for additional information accordingly
                var (found, funcionarioEditado) = empresa.ProcurarFuncionarioPorID(idFuncionario);

                if (found)
                {
                    // Get user input or set values for these variables
                    Console.WriteLine();
                    Console.Write("Digite o novo Nome: ");
                    novoNome = Console.ReadLine();

                    Console.Write("Digite o novo Salário: ");
                    if (!int.TryParse(Console.ReadLine(), out novoSalario))
                    {
                        Console.WriteLine("Entrada inválida para o salário. Certifique-se de inserir um número inteiro.");
                        return;
                    }

                    Console.Write("Digite o novo Departamento (ou pressione Enter para manter o mesmo): ");
                    novoDepartamento = Console.ReadLine();

                    if (funcionarioEditado is Engenheiro)
                    {
                        Console.Write("Digite o novo Gestor (ou pressione Enter para manter o mesmo): ");
                        novoGestor = Console.ReadLine();

                        Console.Write("Digite o novo Projeto (ou pressione Enter para manter o mesmo): ");
                        novoProjeto = Console.ReadLine();
                    }

                    if (funcionarioEditado is Assistente)
                    {
                        Console.Write("Digite o novo Projeto (ou pressione Enter para manter o mesmo): ");
                        novoProjeto = Console.ReadLine();
                    }

                    // Call the method to handle the editing based on the ID
                    empresa.EditarFuncionarioPorID(idFuncionario, novoNome, novoSalario, novoDepartamento, novoGestor, novoProjeto);
                }
            }
            else
            {
                Console.WriteLine("Entrada inválida para o ID do funcionário. Certifique-se de inserir um número inteiro.");
            }
        }

        private static void ProcurarFuncionarioPorIDMenu(Empresa empresa)
        {
            Console.Write("Digite o ID do funcionário a ser procurado: ");

            if (int.TryParse(Console.ReadLine(), out int idFuncionario))
            {
                empresa.ProcurarFuncionarioPorID(idFuncionario);
            }
            else
            {
                Console.WriteLine("Entrada inválida para o ID do funcionário. Certifique-se de inserir um número inteiro.");
            }
        }

        private static void MostrarFuncionarioMaiorSalarioMenu(Empresa empresa)
        {
            Console.WriteLine("╔═════════════════════════════════════╗");
            Console.WriteLine("║    Funcionário com Maior Salário    ║");
            Console.WriteLine("╠═════════════════════════════════════╣");
            Console.WriteLine("║ 1. Diretor                          ║");
            Console.WriteLine("║ 2. Engenheiro                       ║");
            Console.WriteLine("║ 3. Assistente                       ║");
            Console.WriteLine("╚═════════════════════════════════════╝");

            Console.WriteLine();
            Console.Write("Escolha o tipo de funcionário (1-3): ");
            string userInput = Console.ReadLine();

            List<Funcionario> employeesWithHighestSalary = new List<Funcionario>();

            switch (userInput)
            {
                case "1":
                    employeesWithHighestSalary = empresa.FindEmployeesWithHighestSalary(empresa.GetDiretores().Cast<Funcionario>().ToList());
                    break;

                case "2":
                    employeesWithHighestSalary = empresa.FindEmployeesWithHighestSalary(empresa.GetEngenheiros().Cast<Funcionario>().ToList());
                    break;

                case "3":
                    employeesWithHighestSalary = empresa.FindEmployeesWithHighestSalary(empresa.GetAssistentes().Cast<Funcionario>().ToList());
                    break;

                default:
                    Console.WriteLine("Opção inválida. Tente novamente.");
                    return;
            }

            MostrarFuncionariosMaiorSalarioDetalhes(employeesWithHighestSalary);
        }

        private static void MostrarFuncionariosMaiorSalarioDetalhes(List<Funcionario> funcionarios)
        {
            if (funcionarios.Count > 0)
            {
                Console.WriteLine("╔═════════════════════════════════════╗");
                Console.WriteLine("║ Funcionário(s) com o Maior Salário  ║");
                Console.WriteLine("╚═════════════════════════════════════╝");

                foreach (var funcionario in funcionarios)
                {
                    Console.WriteLine(funcionario);
                    Console.WriteLine();
                }
            }
            else
            {
                Console.WriteLine("Nenhum funcionário encontrado.");
            }
        }
        private static void ListarTodosFuncionariosMenu(Empresa empresa)
        {
            Console.WriteLine("╔═════════════════════════════════════╗");
            Console.WriteLine("║     Listar Todos os Funcionários    ║");
            Console.WriteLine("╚═════════════════════════════════════╝");
            empresa.ListarFuncionarios(empresa.GetFuncionarios());
        }
    }
}
