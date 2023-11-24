using System;

namespace GestaoFuncionarios
{
    class Program
    {
        #region Main Menu
        static void Main(string[] args)
        {

            // Create an instance of the Empresa class
            Empresa empresa = new Empresa();

            #region Atuais Membros da Empresa (aqui)
            Diretor diretor1 = new Diretor("Bob Marley", 15000, "Marketing");
            Diretor diretor2 = new Diretor("Alice Johnson", 16000, "Financeiro");
            Diretor diretor3 = new Diretor("John Smith", 17000, "Recursos Humanos");
            Diretor diretor4 = new Diretor("Emily Davis", 18000, "Tecnologia da Informação");
            Diretor diretor5 = new Diretor("Daniel Rodriguez", 19000, "Produção");
            Engenheiro engenheiro1 = new Engenheiro("Laura Turner", 12000, "Engenharia Civil", "John Doe", "Projeto A");
            Engenheiro engenheiro2 = new Engenheiro("Michael Johnson", 13000, "Engenharia Mecânica", "Jane Smith", "Projeto B");
            Engenheiro engenheiro3 = new Engenheiro("Emma Davis", 14000, "Engenharia Elétrica", "David Brown", "Projeto C");
            Engenheiro engenheiro4 = new Engenheiro("Christopher Miller", 15000, "Engenharia de Software", "Jennifer White", "Projeto D");
            Engenheiro engenheiro5 = new Engenheiro("Olivia Wilson", 16000, "Engenharia Química", "Matthew Anderson", "Projeto E");
            Assistente assistente1 = new Assistente("Sophia Adams", 8000, "Administração", "Projeto X");
            Assistente assistente2 = new Assistente("Ethan Wilson", 8500, "Financeiro", "Projeto Y");
            Assistente assistente3 = new Assistente("Ava Miller", 9000, "Recursos Humanos", "Projeto Z");
            Assistente assistente4 = new Assistente("Logan Smith", 9500, "TI", "Projeto W");
            Assistente assistente5 = new Assistente("Isabella Davis", 10000, "Produção", "Projeto V");
            Assistente assistente6 = new Assistente("Mia Johnson", 10500, "Marketing", "Projeto U");
            Assistente assistente7 = new Assistente("Lucas Anderson", 11000, "Administração", "Projeto T");
            Assistente assistente8 = new Assistente("Olivia Brown", 11500, "Financeiro", "Projeto S");
            Assistente assistente9 = new Assistente("Liam White", 12000, "Recursos Humanos", "Projeto R");
            Assistente assistente10 = new Assistente("Emma Turner", 12500, "TI", "Projeto Q");
            empresa.AddDiretor(diretor1.Nome, diretor1.Salario, diretor1.Departamento);
            empresa.AddDiretor(diretor2.Nome, diretor2.Salario, diretor2.Departamento);
            empresa.AddDiretor(diretor3.Nome, diretor3.Salario, diretor3.Departamento);
            empresa.AddDiretor(diretor4.Nome, diretor4.Salario, diretor4.Departamento);
            empresa.AddDiretor(diretor5.Nome, diretor5.Salario, diretor5.Departamento);
            empresa.AddEngenheiro(engenheiro1.Nome, engenheiro1.Salario, engenheiro1.Departamento, engenheiro1.Gestor, engenheiro1.Projeto);
            empresa.AddEngenheiro(engenheiro2.Nome, engenheiro2.Salario, engenheiro2.Departamento, engenheiro2.Gestor, engenheiro2.Projeto);
            empresa.AddEngenheiro(engenheiro3.Nome, engenheiro3.Salario, engenheiro3.Departamento, engenheiro3.Gestor, engenheiro3.Projeto);
            empresa.AddEngenheiro(engenheiro4.Nome, engenheiro4.Salario, engenheiro4.Departamento, engenheiro4.Gestor, engenheiro4.Projeto);
            empresa.AddEngenheiro(engenheiro5.Nome, engenheiro5.Salario, engenheiro5.Departamento, engenheiro5.Gestor, engenheiro5.Projeto);
            empresa.AddAssistente(assistente1.Nome, assistente1.Salario, assistente1.Departamento, assistente1.Projeto);
            empresa.AddAssistente(assistente2.Nome, assistente2.Salario, assistente2.Departamento, assistente2.Projeto);
            empresa.AddAssistente(assistente3.Nome, assistente3.Salario, assistente3.Departamento, assistente3.Projeto);
            empresa.AddAssistente(assistente4.Nome, assistente4.Salario, assistente4.Departamento, assistente4.Projeto);
            empresa.AddAssistente(assistente5.Nome, assistente5.Salario, assistente5.Departamento, assistente5.Projeto);
            empresa.AddAssistente(assistente6.Nome, assistente6.Salario, assistente6.Departamento, assistente6.Projeto);
            empresa.AddAssistente(assistente7.Nome, assistente7.Salario, assistente7.Departamento, assistente7.Projeto);
            empresa.AddAssistente(assistente8.Nome, assistente8.Salario, assistente8.Departamento, assistente8.Projeto);
            empresa.AddAssistente(assistente9.Nome, assistente9.Salario, assistente9.Departamento, assistente9.Projeto);
            empresa.AddAssistente(assistente10.Nome, assistente10.Salario, assistente10.Departamento, assistente10.Projeto);

            #endregion
            // Main Menu Loop
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
                Console.WriteLine("║ 5. Relatório de Salário Total       ║");
                Console.WriteLine("║ 6. Maior Salário por Função         ║");
                Console.WriteLine("║ 7. Lista Completa de Funcionários   ║");
                Console.WriteLine("║ 0. Sair                             ║");
                Console.WriteLine("╚═════════════════════════════════════╝");
                
                // Get user input
                Console.WriteLine("");
                Console.WriteLine("Escolha uma opção (0-7): ");
                string userInput = Console.ReadLine();

                // Process user input
                switch (userInput)
                {
                    case "1":
                        // Add Worker
                        AddWorkerMenu(empresa);
                        break;

                    case "2":
                        // Remove Worker
                        RemoveWorkerMenu(empresa);
                        break;

                    case "3":
                        // Edit Worker
                        EditWorkerMenu(empresa);
                        break;

                    case "4":
                        // Search for Worker by ID
                        SearchWorkerByID(empresa);
                        break;

                    case "5":
                        // Total Wages Report (direct to Empresa.cs)
                        empresa.TotalWagesReport();
                        break;

                    case "6":
                        // Top Wages by Function
                        TopWagesWorker(empresa);
                        break;

                    case "7":
                        // List All Workers
                        ListAllWorkers(empresa);
                        break;

                    case "0":
                        // Exit the Program
                        Console.WriteLine();
                        Console.WriteLine("Obrigado e até breve!");
                        return;

                    default:
                        // Handle invalid input
                        Console.WriteLine("Opção inválida. Tente novamente.");
                        break;
                }
                // Prompt for next action
                Console.WriteLine("\nPressione qualquer tecla para continuar...");
                Console.ReadKey(); // wait for user input
                Console.Clear(); // Clear console for the next iteration
            }

        }
        #endregion

        #region Add Worker
        /// <summary>
        /// Adding a Worker (Diretor/Engenheiro/Assistente)
        /// </summary>
        /// <param name="empresa"></param>
        private static void AddWorkerMenu(Empresa empresa)
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
                    AddDiretor(empresa);
                    break;

                case "2":
                    // Adicionar Engenheiro
                    AddEngenheiro(empresa);
                    break;

                case "3":
                    // Adicionar Assistente
                    AddAssistente(empresa);
                    break;

                default:
                    Console.WriteLine("Opção inválida.");
                    break;
            }
        }

        private static void AddDiretor(Empresa empresa)
        {
            Console.WriteLine();
            Console.Write("Nome do Diretor: ");
            string nome = Console.ReadLine();

            Console.Write("Salário do Diretor: ");
            int salario;
            if (!int.TryParse(Console.ReadLine(), out salario))
            {
                Console.WriteLine("Entrada inválida para o salário. Insira um número inteiro.");
                return;
            }

            Console.Write("Departamento do Diretor: ");
            string departamento = Console.ReadLine();

            empresa.AddDiretor(nome, salario, departamento);
            Console.WriteLine("Diretor adicionado com sucesso!");
        }

        private static void AddEngenheiro(Empresa empresa)
        {
            Console.WriteLine();
            Console.Write("Digite o Nome do Engenheiro: ");
            string nome = Console.ReadLine();

            Console.Write("Digite o Salário do Engenheiro: ");
            int salario;
            if (!int.TryParse(Console.ReadLine(), out salario))
            {
                Console.WriteLine("Entrada inválida para o salário. Insira um número inteiro.");
                return;
            }

            Console.Write("Departamento do Engenheiro: ");
            string departamento = Console.ReadLine();

            Console.Write("Gestor do Engenheiro: ");
            string gestor = Console.ReadLine();

            Console.Write("Projeto do Engenheiro: ");
            string projeto = Console.ReadLine();

            empresa.AddEngenheiro(nome, salario, departamento, gestor, projeto);
            Console.WriteLine("Engenheiro adicionado com sucesso!");
        }

        private static void AddAssistente(Empresa empresa)
        {
            Console.WriteLine();
            Console.Write("Nome do Assistente: ");
            string nome = Console.ReadLine();

            Console.Write("Salário do Assistente: ");
            int salario;
            if (!int.TryParse(Console.ReadLine(), out salario))
            {
                Console.WriteLine("Entrada inválida para o salário. Insira um número inteiro.");
                return;
            }

            Console.Write("Departamento do Assistente: ");
            string departamento = Console.ReadLine();

            Console.Write("Projeto do Assistente: ");
            string projeto = Console.ReadLine();

            empresa.AddAssistente(nome, salario, departamento, projeto);
            Console.WriteLine("Assistente adicionado com sucesso!");
        }
        #endregion

        #region Remove Worker
        /// <summary>
        /// Removing a Worker
        /// </summary>
        /// <param name="empresa"></param>
        private static void RemoveWorkerMenu(Empresa empresa)
        {
            Console.WriteLine("╔═════════════════════════════════════╗");
            Console.WriteLine("║         Remover Funcionário         ║");
            Console.WriteLine("╚═════════════════════════════════════╝");

            Console.WriteLine();
            Console.Write("ID do funcionário a ser removido: ");

            if (int.TryParse(Console.ReadLine(), out int idFuncionario))
            {
                // Check the type of employee and ask for additional information accordingly
                var (found, editedWorker) = empresa.FindWorkerById(idFuncionario);
                Console.WriteLine();
                empresa.RemoveWorker(idFuncionario);
            }
            else
            {
                Console.WriteLine("Entrada inválida para o ID do funcionário. Insira um número inteiro.");
            }
        }
        #endregion

        #region Edit Worker
        /// <summary>
        /// Editing some of the worker's details
        /// </summary>
        /// <param name="empresa"></param>
        private static void EditWorkerMenu(Empresa empresa)
        {
            Console.WriteLine("╔═════════════════════════════════════╗");
            Console.WriteLine("║          Editar Funcionário         ║");
            Console.WriteLine("╚═════════════════════════════════════╝");

            Console.WriteLine();
            Console.Write("ID do funcionário a ser editado: ");
            if (int.TryParse(Console.ReadLine(), out int idFuncionario))
            {
                // Declare and initialize the variables here
                int novoSalario;
                string novoDepartamento;
                string novoGestor = null; // Initialize to null
                string novoProjeto = null; // Initialize to null

                // Check the type of employee and ask for additional information accordingly
                var (found, editedWorker) = empresa.FindWorkerById(idFuncionario);

                if (found)
                {
                    // Get user input or set values for these variables
                    Console.WriteLine();

                    Console.Write("Introduza o novo Salário: ");
                    if (!int.TryParse(Console.ReadLine(), out novoSalario))
                    {
                        Console.WriteLine("Erro. Insira um número inteiro.");
                        return;
                    }

                    Console.Write("Introduza o novo Departamento (ou pressione Enter para manter o mesmo): ");
                    novoDepartamento = Console.ReadLine();

                    if (editedWorker is Engenheiro)
                    {
                        Console.Write("Introduza o novo Gestor (ou pressione Enter para manter o mesmo): ");
                        novoGestor = Console.ReadLine();

                        Console.Write("Introduza o novo Projeto (ou pressione Enter para manter o mesmo): ");
                        novoProjeto = Console.ReadLine();
                    }

                    if (editedWorker is Assistente)
                    {
                        Console.Write("Introduza o novo Projeto (ou pressione Enter para manter o mesmo): ");
                        novoProjeto = Console.ReadLine();
                    }
                    // Call the method to handle the editing based on the ID
                    empresa.EditWorkerByID(idFuncionario, novoSalario, novoDepartamento, novoGestor, novoProjeto);
                }
            }
            else
            {
                Console.WriteLine("Erro. Insira um número inteiro.");
            }
        }
        #endregion

        #region Find Worker
        /// <summary>
        /// Finding the worker by their ID
        /// </summary>
        /// <param name="empresa"></param>
        private static void SearchWorkerByID(Empresa empresa)
        {
            Console.Write("Introduza o ID do funcionário a ser procurado: ");

            if (int.TryParse(Console.ReadLine(), out int idFuncionario))
            {
                empresa.FindWorkerById(idFuncionario);
            }
            else
            {
                Console.WriteLine("Opção inválida.");
            }
        }
        #endregion

        #region Top Earning Worker
        /// <summary>
        /// Finding the Top earning worker(s) by Function
        /// </summary>
        /// <param name="empresa"></param>
        private static void TopWagesWorker(Empresa empresa)
        {
            Console.WriteLine("╔═════════════════════════════════════╗");
            Console.WriteLine("║    Funcionário com Maior Salário    ║");
            Console.WriteLine("╠═════════════════════════════════════╣");
            Console.WriteLine("║ 1. Diretor                          ║");
            Console.WriteLine("║ 2. Engenheiro                       ║");
            Console.WriteLine("║ 3. Assistente                       ║");
            Console.WriteLine("╚═════════════════════════════════════╝");

            Console.WriteLine();
            Console.Write("Escolha a função (1-3): ");
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
                    Console.WriteLine("Opção inválida.");
                    return;
            }

            ShowDetailsTopEarningWorker(employeesWithHighestSalary);
        }
        private static void ShowDetailsTopEarningWorker(List<Funcionario> funcionarios)
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
        #endregion

        #region List of Workers

        /// <summary>
        /// Listing all workers at the company
        /// </summary>
        /// <param name="empresa"></param>
        private static void ListAllWorkers(Empresa empresa)
        {
            Console.WriteLine();
            Console.WriteLine("             ╔═════════════════════════════════════╗");
            Console.WriteLine("             ║        Lista de Funcionários        ║");
            Console.WriteLine("             ╚═════════════════════════════════════╝");
            Console.WriteLine("═════════════════════════════════════════════════════════════════════════════");
            empresa.ListWorkers(empresa.GetFuncionarios());
        }
        #endregion
    }
}
