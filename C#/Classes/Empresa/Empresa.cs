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
                diretores.Remove(diretorToRemove);
                Console.WriteLine($"Funcionário com ID {id} removido com sucesso.");
                return;
            }

            Engenheiro engenheiroToRemove = engenheiros.FirstOrDefault(e => e.Id == id);

            if (engenheiroToRemove != null)
            {
                engenheiros.Remove(engenheiroToRemove);
                Console.WriteLine($"Funcionário com ID {id} removido com sucesso.");
                return;
            }

            Assistente assistenteToRemove = assistentes.FirstOrDefault(a => a.Id == id);

            if (assistenteToRemove != null)
            {
                assistentes.Remove(assistenteToRemove);
                Console.WriteLine($"Funcionário com ID {id} removido com sucesso.");
                return;
            }

            Console.WriteLine($"Nenhum funcionário encontrado com o ID {id}.");
        }
        #endregion

        #region Editar Funcionário
        public void EditarDiretor(int id, string novoNome, int novoSalario, string novoDepartamento)
        {
            Diretor diretor = diretores.FirstOrDefault(d => d.Id == id);

            if (diretor != null)
            {
                diretor.Nome = novoNome;
                diretor.Salario = novoSalario;
                diretor.Departamento = novoDepartamento;

                Console.WriteLine($"Diretor com o ID {id} editado com sucesso.");
            }
            else
            {
                Console.WriteLine($"Diretor com o ID {id} não encontrado.");
            }
        }

        public void EditarEngenheiro(int id, string novoNome, int novoSalario, string novoDepartamento, string novoGestor)
        {
            Engenheiro engenheiro = engenheiros.FirstOrDefault(e => e.Id == id);

            if (engenheiro != null)
            {
                engenheiro.Nome = novoNome;
                engenheiro.Salario = novoSalario;
                engenheiro.Departamento = novoDepartamento;
                engenheiro.Gestor = novoGestor;

                Console.WriteLine($"Engenheiro com o ID {id} editado com sucesso.");
            }
            else
            {
                Console.WriteLine($"Engenheiro com o ID {id} não encontrado.");
            }
        }

        public void EditarAssistente(int id, string novoNome, int novoSalario, string novoDepartamento, string novoProjeto)
        {
            Assistente assistente = assistentes.FirstOrDefault(a => a.Id == id);

            if (assistente != null)
            {
                assistente.Nome = novoNome;
                assistente.Salario = novoSalario;
                assistente.Departamento = novoDepartamento;
                assistente.Projeto = novoProjeto;

                Console.WriteLine($"Assistente com o ID {id} editado com sucesso.");
            }
            else
            {
                Console.WriteLine($"Assistente com o ID {id} não encontrado.");
            }
        }
        #endregion

        public void ProcurarFuncionarioPorID(int id)
        {
            Diretor encontradoDiretor = diretores.FirstOrDefault(d => d.Id == id);
            Engenheiro encontradoEngenheiro = engenheiros.FirstOrDefault(e => e.Id == id);
            Assistente encontradoAssistente = assistentes.FirstOrDefault(a => a.Id == id);

            if (encontradoDiretor != null)
            {
                Console.WriteLine($"Diretor encontrado: {encontradoDiretor}");
            }
            else if (encontradoEngenheiro != null)
            {
                Console.WriteLine($"Engenheiro encontrado: {encontradoEngenheiro}");
            }
            else if (encontradoAssistente != null)
            {
                Console.WriteLine($"Assistente encontrado: {encontradoAssistente}");
            }
            else
            {
                Console.WriteLine($"Não foi encontrado qualquer funcionário com o ID: {id}");
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
    }
}