internal class Funcionario
{
    private static int nextId = 980; // Initialize addresses after a certain address
    private static readonly object lockObject = new object();

    public int Id { get; }
    public string Nome { get; set; }
    public int Salario { get; set; }

    public Funcionario(string nome, int salario)
    {
        lock (lockObject)
        {
            Id = nextId++;
        }
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