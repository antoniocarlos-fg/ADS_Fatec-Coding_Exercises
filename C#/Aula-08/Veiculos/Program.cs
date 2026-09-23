using System;

class Program
{
    static void Main()
    {
        Moto PCX = new Moto("Honda", "PCX", 2026, 160);

        PCX.Ligar();
        PCX.DarGrau();
    }
}