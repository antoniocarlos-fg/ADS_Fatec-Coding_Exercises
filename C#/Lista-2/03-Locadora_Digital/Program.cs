using System;

class Program
{
    static void Main()
    {
        JogoDigital jogo1 = new JogoDigital("Hollow Knight", "PC", 5.00m);
        JogoDigital jogo2 = new JogoDigital("God of War: Laufey", "PS5", 8.50m);

        Console.WriteLine($"{jogo1.Titulo} ({jogo1.Plataforma}) - R${jogo1.PrecoDiaria}/dia - Disponível: {jogo1.Disponivel}");
        Console.WriteLine($"{jogo2.Titulo} ({jogo2.Plataforma}) - R${jogo2.PrecoDiaria}/dia - Disponível: {jogo2.Disponivel}");

        Console.WriteLine("\nTestando CalcularAluguel sem desconto:");
        decimal total1 = jogo1.CalcularAluguel(3);
        Console.WriteLine($"3 dias de {jogo1.Titulo}: R${total1}");

        Console.WriteLine("\nTestando CalcularAluguel com desconto válido (20%):");
        decimal total2 = jogo1.CalcularAluguel(3, 0.20);
        Console.WriteLine($"3 dias de {jogo1.Titulo} com 20% off: R${total2}");

        Console.WriteLine("\nTestando CalcularAluguel com desconto no limite (50%):");
        decimal total3 = jogo2.CalcularAluguel(4, 0.50);
        Console.WriteLine($"4 dias de {jogo2.Titulo} com 50% off: R${total3}");

        Console.WriteLine("\nTestando CalcularAluguel com desconto inválido (70%):");
        decimal total4 = jogo2.CalcularAluguel(4, 0.70);
        Console.WriteLine($"4 dias de {jogo2.Titulo} com 70% off (deve ignorar): R${total4}");

        Console.WriteLine("\nTestando CalcularAluguel com desconto negativo:");
        decimal total5 = jogo2.CalcularAluguel(2, -0.10);
        Console.WriteLine($"2 dias de {jogo2.Titulo} com -10% (deve ignorar): R${total5}");
    }
}