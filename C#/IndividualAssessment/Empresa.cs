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

        #region Worker Management

        #region Add Worker functions
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

        #region Remove Worker functions
        public void RemoveWorker(int id)
                    
        {           
            Diretor diretorToRemove = diretores.FirstOrDefault(d => d.Id == id);

            if (diretorToRemove != null)
            {
                ReturnWithEffect($"Diretor com ID {id} removido com sucesso.");
                diretores.Remove(diretorToRemove);
                return;
            }

            Engenheiro engenheiroToRemove = engenheiros.FirstOrDefault(e => e.Id == id);

            if (engenheiroToRemove != null)
            {
                ReturnWithEffect($"Engenheiro com ID {id} removido com sucesso.");
                engenheiros.Remove(engenheiroToRemove);
                return;
            }

            Assistente assistenteToRemove = assistentes.FirstOrDefault(a => a.Id == id);

            if (assistenteToRemove != null)
            {
                ReturnWithEffect($"Assitente com ID {id} removido com sucesso.");
                assistentes.Remove(assistenteToRemove);
                return;
            }

        }
        #endregion

        #region Edit Worker functions
        public void EditWorkerByID(int id, int novoSalario, string novoDepartamento = null, string novoGestor = null, string novoProjeto = null)
        {
            List<Funcionario> funcionarios = GetFuncionarios();
            Funcionario funcionario = funcionarios.FirstOrDefault(f => f.Id == id);

            if (funcionario != null)
            {
                funcionario.Salario = novoSalario;

                if (funcionario is Diretor diretor)
                {
                    EditDiretor(diretor, novoDepartamento);
                }
                else if (funcionario is Engenheiro engenheiro)
                {
                    EditEngenheiro(engenheiro, novoDepartamento, novoGestor, novoProjeto);
                }
                else if (funcionario is Assistente assistente)
                {
                    EditAssistente(assistente, novoDepartamento, novoProjeto);
                }
                Console.WriteLine();
                ReturnWithEffect($"Funcionário com o ID {id} editado com sucesso.");
            }
        }

        private void EditEngenheiro(Engenheiro engenheiro, string novoDepartamento, string novoGestor, string novoProjeto)
        {
            if (engenheiro.GetType().GetProperty("Departamento") != null && !string.IsNullOrWhiteSpace(novoDepartamento))
            {
                engenheiro.Departamento = novoDepartamento;
            }

            if (engenheiro.GetType().GetProperty("Projeto") != null && !string.IsNullOrWhiteSpace(novoProjeto))
            {
                engenheiro.Projeto = novoProjeto;
            }


            if (engenheiro.GetType().GetProperty("Gestor") != null && !string.IsNullOrWhiteSpace(novoGestor))
            {
                engenheiro.Gestor = novoGestor;
            }
        }

        private void EditDiretor(Diretor diretor, string novoDepartamento)
        {
            if (diretor.GetType().GetProperty("Departamento") != null && !string.IsNullOrWhiteSpace(novoDepartamento))
            {
                diretor.Departamento = novoDepartamento;
            }
        }

        private void EditAssistente(Assistente assistente, string novoDepartamento, string novoProjeto)
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
        #endregion

        #region Find Worker
        public (bool found, Funcionario funcionario) FindWorkerById(int id)
        {
            Diretor encontradoDiretor = diretores.FirstOrDefault(d => d.Id == id);
            Engenheiro encontradoEngenheiro = engenheiros.FirstOrDefault(e => e.Id == id);
            Assistente encontradoAssistente = assistentes.FirstOrDefault(a => a.Id == id);

            if (encontradoDiretor != null)
            {
                Console.WriteLine();
                ReturnWithEffect($"Diretor com {encontradoDiretor}");
                return (true, encontradoDiretor);
            }
            else if (encontradoEngenheiro != null)
            {
                Console.WriteLine();
                ReturnWithEffect($"Engenheiro com {encontradoEngenheiro}");
                return (true, encontradoEngenheiro);
            }
            else if (encontradoAssistente != null)
            {
                Console.WriteLine();
                ReturnWithEffect($"Assistente com {encontradoAssistente}");
                return (true, encontradoAssistente);
            }
            else
            {
                Console.WriteLine();
                ReturnWithEffect($"Não foi encontrado qualquer funcionário com o ID: {id}");
                return (false, null);
            }
        }
        #endregion

        #region Wages Functions
        public void TotalWagesReport()
        {
            int TotalWagesReportDiretor = diretores.Sum(d => d.Salario);
            int TotalWagesReportEngenheiro = engenheiros.Sum(e => e.Salario);
            int TotalWagesReportAssistente = assistentes.Sum(a => a.Salario);

            Console.WriteLine($"Salário total para Diretores: {TotalWagesReportDiretor}");
            Console.WriteLine($"Salário total para Engenheiros: {TotalWagesReportEngenheiro}");
            Console.WriteLine($"Salário total para Assistentes: {TotalWagesReportAssistente}");
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
        #endregion

        #region Worker Lists
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

        public void ListWorkers(List<Funcionario> funcionarios)
        {
            var sortedFuncionarios = funcionarios.OrderBy(f => f.Id).ToList();

            foreach (var funcionario in sortedFuncionarios)
            {
                if (funcionario is Diretor)
                {
                    Console.WriteLine($"{funcionario.AtributosFunc}, Posição: Diretor");
                }
                else if (funcionario is Engenheiro)
                {
                    Console.WriteLine($"{funcionario.AtributosFunc}, Posição: Engenheiro");
                }
                else if (funcionario is Assistente)
                {
                    Console.WriteLine($"{funcionario.AtributosFunc}, Posição: Assistente");
                }

                Console.WriteLine("═════════════════════════════════════════════════════════════════════════════");
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
        #endregion

        #region Utility
        // Slowing down some of the output
        public static void ReturnWithEffect(string message)
        {
            foreach (char c in message)
            {
                Console.Write(c);
                System.Threading.Thread.Sleep(10); // preferred speed
            }
            Console.WriteLine();
        }

        /*
         * This is in the original code, but is now a useless artifact. Kept for presentation *
         
        internal static void ReturnWithEffect(Funcionario funcionario)
        {
            throw new NotImplementedException();
        }
        */
        #endregion
    }
}
