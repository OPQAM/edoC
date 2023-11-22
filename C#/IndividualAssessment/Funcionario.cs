internal class Funcionario
{
    private static int nextId = 1001; // Initialize addresses with 1

    public int Id { get; }
    public string Nome { get; set; }
    public int Salario { get; set; }

    public Funcionario(string nome, int salario)
    {
        Id = nextId++;
        Nome = nome;
        Salario = salario;
    }
    public string AtributosFunc
    {
        get
        {
            return $"ID: {Id}, Nome: {Nome}, Salario: {Salario}";
        }
    }
}