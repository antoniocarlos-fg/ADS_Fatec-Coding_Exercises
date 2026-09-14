using System;

class Program
{
    static void Main()
    {
        Termostato t1 = new Termostato();
        Termostato t2 = new Termostato(24.0);

        Console.WriteLine($"t1 -> Temp: {t1.TemperaturaAlvo} / Ligado: {t1.Ligado}");
        Console.WriteLine($"t2 -> Temp: {t2.TemperaturaAlvo} / Ligado: {t2.Ligado}");

        Console.WriteLine("\nTestando valores fora do intervalo:");
        t1.TemperaturaAlvo = 10.0;
        Console.WriteLine($"Temp após tentar 10.0: {t1.TemperaturaAlvo}");

        t1.TemperaturaAlvo = 40.0;
        Console.WriteLine($"Temp após tentar 40.0: {t1.TemperaturaAlvo}");

        Console.WriteLine("\nTestando valor válido:");
        t1.TemperaturaAlvo = 22.5;
        Console.WriteLine($"Temp após tentar 22.5: {t1.TemperaturaAlvo}");

        Console.WriteLine("\nTestando Ajustar (sem ligar):");
        t1.Ajustar(19.0);
        Console.WriteLine($"Temp: {t1.TemperaturaAlvo} / Ligado: {t1.Ligado}");

        Console.WriteLine("\nTestando Ajustar (com ligarAparelho = false):");
        t1.Ajustar(20.0, false);
        Console.WriteLine($"Temp: {t1.TemperaturaAlvo} / Ligado: {t1.Ligado}");

        Console.WriteLine("\nTestando Ajustar (com ligarAparelho = true):");
        t1.Ajustar(21.0, true);
        Console.WriteLine($"Temp: {t1.TemperaturaAlvo} / Ligado: {t1.Ligado}");
    }
}
