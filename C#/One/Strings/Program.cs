namespace Strings
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string nome = "aulas de informática na ATEC";
            string parteDoNome = nome.Substring(6, 9);
            string outraParteDoNome = nome.Substring(0, nome.Length -4 );
            Console.WriteLine(nome);
            Console.WriteLine(parteDoNome);
            Console.WriteLine(outraParteDoNome);
        }
    }
}