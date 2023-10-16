using ConsoleApp1;

namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // Create some point instances
            Ponto point1 = new Ponto(-1, 2);
            Ponto point2 = new Ponto(3, -4);
            Ponto point3 = new Ponto(18, 6);

            // Create some line instances using the points
            Reta line1 = new Reta(point1, point2);
            Reta line2 = new Reta(point2, point3);

            // Test the declive and ordenadaOrigem methods
            Console.WriteLine("Line 1 Slope: " + line1.declive());
            Console.WriteLine("Line 1 Y-Intercept: " + line1.ordenadaOrigem());

            Console.WriteLine("Line 2 Slope: " + line2.declive());
            Console.WriteLine("Line 2 Y-Intercept: " + line2.ordenadaOrigem());

            // Test the ToString method
            Console.WriteLine("Line 1 Equation: " + line1.ToString());
            Console.WriteLine("Line 2 Equation: " + line2.ToString());

            // Test for a vertical line (should throw exceptions)
            try
            {
                Ponto verticalPoint1 = new Ponto(2, 1);
                Ponto verticalPoint2 = new Ponto(2, 3);
                Reta verticalLine = new Reta(verticalPoint1, verticalPoint2);
            }
            catch (InvalidOperationException e)
            {
                Console.WriteLine("Exception: " + e.Message);
            }
        }
    }
}


