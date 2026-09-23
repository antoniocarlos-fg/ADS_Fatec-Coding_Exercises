using System;

class Program
{
    static void Main()
    {
        Gerente Roberto = new Gerente("Roberto", 2000, 3000);

        Console.WriteLine(Roberto.ExibirTotal());
    }
}