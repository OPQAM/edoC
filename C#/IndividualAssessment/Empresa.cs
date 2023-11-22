using System;
using System.Collections.Generic;
using System.Linq;

namespace GestaoFuncionarios
{
    internal class Empresa
    {
        List<Diretor> diretores = new List<Diretor>();
        List<Engenheiro> engenheiros = new List<Engenheiro>();
        List<Assistente> assistentes = new List<Assistente>();

        #region Adicionar Funcionário
        public void AddDiretor(string nome, int salario, string departamento)
        {
            Diretor d = new Diretor(nome, salario, departamento);
            diretores.Add(d);
        }

        public void AddEngenheiro(string nome, int salario, string departamento, string gestor, string projeto)
        {
            Engenheiro e = new Engenheiro(nome, salario, departamento, gestor, projeto);
            engenheiros.Add(e);
        }

        public void AddAssistente(string nome, int salario, string departamento, string projeto)
        {
            Assistente a = new Assistente(nome, salario, departamento, projeto);
            assistentes.Add(a);
        }
        #endregion

        #region Remover Funcionário
        public void RemoverFuncionario(int id)
        {
            Diretor diretorToRemove = diretores.FirstOrDefault(d => d.Id == id);

            if (diretorToRemove != null)
            {
                RemoverComEfeito($"Diretor com ID {id} removido com sucesso.");
                diretores.Remove(diretorToRemove);
                return;
            }

            Engenheiro engenheiroToRemove = engenheiros.FirstOrDefault(e => e.Id == id);

            if (engenheiroToRemove != null)
            {
                RemoverComEfeito($"Engenheiro com ID {id} removido com sucesso.");
                engenheiros.Remove(engenheiroToRemove);
                return;
            }

            Assistente assistenteToRemove = assistentes.FirstOrDefault(a => a.Id == id);

            if (assistenteToRemove != null)
            {
                RemoverComEfeito($"Assitente com ID {id} removido com sucesso.");
                assistentes.Remove(assistenteToRemove);
                return;
            }

            RemoverComEfeito($"Nenhum funcionário encontrado com o ID {id}.");
        }
        #endregion

        #region Editar Funcionário
        public void EditarFuncionarioPorID(int id, string novoNome, int novoSalario, string novoDepartamento = null, string novoGestor = null, string novoProjeto = null)
        {
            List<Funcionario> funcionarios = GetFuncionarios();
            Funcionario funcionario = funcionarios.FirstOrDefault(f => f.Id == id);

            if (funcionario != null)
            {
                funcionario.Nome = novoNome;
                funcionario.Salario = novoSalario;

                if (funcionario is Diretor diretor)
                {
                    EditarDiretor(diretor, novoDepartamento);
                }
                else if (funcionario is Engenheiro engenheiro)
                {
                    EditarEngenheiro(engenheiro, novoDepartamento, novoGestor, novoProjeto);
                }
                else if (funcionario is Assistente assistente)
                {
                    EditarAssistente(assistente, novoDepartamento, novoProjeto);
                }
                Console.WriteLine($"Funcionário com o ID {id} editado com sucesso.");
            }
            else
            {
                Console.WriteLine($"Funcionário com o ID {id} não encontrado.");
            }
        }

        private void EditarEngenheiro(Engenheiro engenheiro, string novoDepartamento, string novoGestor, string novoProjeto)
        {
            // adições para garantir que o 'enter' faz com que permaneça igual
            if (engenheiro.GetType().GetProperty("Departamento") != null && !string.IsNullOrWhiteSpace(novoDepartamento))
            {
                engenheiro.Departamento = novoDepartamento;
            }

            // Check if the property exists and the input is not empty before attempting to edit it
            if (engenheiro.GetType().GetProperty("Projeto") != null && !string.IsNullOrWhiteSpace(novoProjeto))
            {
                engenheiro.Projeto = novoProjeto;
            }

            // Check if the property exists and the input is not empty before attempting to edit it
            if (engenheiro.GetType().GetProperty("Gestor") != null && !string.IsNullOrWhiteSpace(novoGestor))
            {
                engenheiro.Gestor = novoGestor;
            }
        }

        private void EditarDiretor(Diretor diretor, string novoDepartamento)
        {
            if (diretor.GetType().GetProperty("Departamento") != null && !string.IsNullOrWhiteSpace(novoDepartamento))
            {
                diretor.Departamento = novoDepartamento;
            }
        }

        private void EditarAssistente(Assistente assistente, string novoDepartamento, string novoProjeto)
        {
            if (assistente.GetType().GetProperty("Departamento") != null && !string.IsNullOrWhiteSpace(novoDepartamento))
            {
                assistente.Departamento = novoDepartamento;
            }

            if (assistente.GetType().GetProperty("Projeto") != null && !string.IsNullOrWhiteSpace(novoProjeto))
            {
                assistente.Projeto = novoProjeto;
            }
        }
        #endregion

        // O bool diz se foi encontrado. Permitindo mandar abaixo outras funções se não
        public (bool found, Funcionario funcionario) ProcurarFuncionarioPorID(int id)
        {
            Diretor encontradoDiretor = diretores.FirstOrDefault(d => d.Id == id);
            Engenheiro encontradoEngenheiro = engenheiros.FirstOrDefault(e => e.Id == id);
            Assistente encontradoAssistente = assistentes.FirstOrDefault(a => a.Id == id);

            if (encontradoDiretor != null)
            {
                Console.WriteLine();
                Console.WriteLine($"Diretor com {encontradoDiretor}");
                return (true, encontradoDiretor);
            }
            else if (encontradoEngenheiro != null)
            {
                Console.WriteLine();
                Console.WriteLine($"Engenheiro com {encontradoEngenheiro}");
                return (true, encontradoEngenheiro);
            }
            else if (encontradoAssistente != null)
            {
                Console.WriteLine();
                Console.WriteLine($"Assistente com {encontradoAssistente}");
                return (true, encontradoAssistente);
            }
            else
            {
                Console.WriteLine($"Não foi encontrado qualquer funcionário com o ID: {id}");
                return (false, null);
            }
        }

        public void RelatorioSalarioTotal()
        {
            int SalarioTotalDiretor = diretores.Sum(d => d.Salario);
            int SalarioTotalEngenheiro = engenheiros.Sum(e => e.Salario);
            int SalarioTotalAssistente = assistentes.Sum(a => a.Salario);

            Console.WriteLine($"Salário total para Diretores: {SalarioTotalDiretor}");
            Console.WriteLine($"Salário total para Engenheiros: {SalarioTotalEngenheiro}");
            Console.WriteLine($"Salário total para Assistentes: {SalarioTotalAssistente}");
        }

        public List<Funcionario> FindEmployeesWithHighestSalary(List<Funcionario> funcionarios)
        {
            if (funcionarios.Count == 0)
            {
                return new List<Funcionario>();
            }

            int maxSalary = funcionarios.Max(f => f.Salario);

            return funcionarios.Where(f => f.Salario == maxSalary).ToList();
        }

        public List<Diretor> GetDiretores()
        {
            return diretores;
        }

        public List<Engenheiro> GetEngenheiros()
        {
            return engenheiros;
        }

        public List<Assistente> GetAssistentes()
        {
            return assistentes;
        }

        public void ListarFuncionarios(List<Funcionario> funcionarios)
        {
            var sortedFuncionarios = funcionarios.OrderBy(f => f.Id).ToList();

            foreach (var funcionario in sortedFuncionarios)
            {
                // Use the 'is' keyword to check the type of the employee
                if (funcionario is Diretor)
                {
                    Console.WriteLine($"║{funcionario.AtributosFunc}, Posição: Diretor║");
                }
                else if (funcionario is Engenheiro)
                {
                    Console.WriteLine($"║{funcionario.AtributosFunc}, Posição: Engenheiro║");
                }
                else if (funcionario is Assistente)
                {
                    Console.WriteLine($"║{funcionario.AtributosFunc}, Posição: Assistente║");
                }

                Console.WriteLine("-------------------------------");
            }
        }

        public List<Funcionario> GetFuncionarios()
        {
            List<Funcionario> funcionarios = new List<Funcionario>();
            funcionarios.AddRange(diretores);
            funcionarios.AddRange(engenheiros);
            funcionarios.AddRange(assistentes);
            return funcionarios;
        }

        // Slowing down some of the output
        private static void RemoverComEfeito(string message)
        {
            foreach (char c in message)
            {
                Console.Write(c);
                System.Threading.Thread.Sleep(15); // Adjust the sleep duration for your preferred speed
            }
            Console.WriteLine();
        }
    }
}