using System;

namespace GestaoFuncionarios
{
    internal class Assistente : Funcionario
    {
        public string Departamento { get; set; }
        public string Projeto { get; set; }

        // Constructor
        public Assistente(string nome, int salario, string departamento, string projeto)
            : base(nome, salario)
        {
            Departamento = departamento;
            Projeto = projeto;
        }

        // this adds the extra field(s) to the string output
        public override string ToString()
        {
            return $"ID: {Id}\nNome: {Nome}\nSalario: {Salario}\nDepartamento: {Departamento}\nProjeto: {Projeto}";
        }
        public string AtributosFunc
        {
            get
            {
                return ToString();
            }
        }
    }
}