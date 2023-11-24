using System;

namespace GestaoFuncionarios
{
    internal class Engenheiro : Funcionario
    {
        public string Departamento { get; set; }
        public string Projeto { get; set; }
        public string Gestor { get; set; }

        // Constructor
        public Engenheiro(string nome, int salario, string departamento, string gestor, string projeto)
            : base(nome, salario)
        {
            Departamento = departamento;
            Gestor = gestor;
            Projeto = projeto;
        }

        // this adds the extra field(s) to the string output
        public override string ToString()
        {
            return $"ID: {Id}\nNome: {Nome}\nSalario: {Salario}\nDepartamento: {Departamento}\nGestor: {Gestor}\nProjeto: {Projeto}";
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