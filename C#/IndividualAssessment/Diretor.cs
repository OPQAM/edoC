using System;

namespace GestaoFuncionarios
{
    internal class Diretor : Funcionario
    {
        public string Departamento { get; set; }

        // Constructor
        public Diretor(string nome, int salario, string departamento)
            : base(nome, salario)
        {
            Departamento = departamento;
        }

        // this adds the extra field(s) to the string output
        public override string ToString()
        {
            return $"ID: {Id}\nNome: {Nome}\nSalario: {Salario}\nDepartamento: {Departamento}";
        }
        public string AtributosFunc
        {
            get
            {
                return $"ID: {Id}, Nome: {Nome}, Salario: {Salario}, Departamento: {Departamento}";
            }
        }
    }
}
