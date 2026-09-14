using System;

class Program
{
    static void Main()
    {
        PersonagemRPG heroi = new PersonagemRPG("Inacio Luiz");
        PersonagemRPG mago = new PersonagemRPG("Davy Jones", 60, 100);

        Console.WriteLine($"{heroi.Nome} - Vida: {heroi.PontosVida} / Mana: {heroi.PontosMana} / Nivel: {heroi.Nivel} / Vivo: {heroi.EstaVivo}");
        Console.WriteLine($"{mago.Nome} - Vida: {mago.PontosVida} / Mana: {mago.PontosMana} / Nivel: {mago.Nivel} / Vivo: {mago.EstaVivo}");

        Console.WriteLine("\nTestando ReceberDano (dano físico):");
        heroi.ReceberDano(30);
        Console.WriteLine($"{heroi.Nome} - Vida: {heroi.PontosVida} / Vivo: {heroi.EstaVivo}");

        Console.WriteLine("\nTestando ReceberDano (dano mágico com escudo):");
        mago.ReceberDano(20, true);
        Console.WriteLine($"{mago.Nome} - Vida: {mago.PontosVida} / Vivo: {mago.EstaVivo}");

        Console.WriteLine("\nTestando ReceberDano (dano mágico sem escudo):");
        mago.ReceberDano(20, false);
        Console.WriteLine($"{mago.Nome} - Vida: {mago.PontosVida} / Vivo: {mago.EstaVivo}");

        Console.WriteLine("\nTestando dano fatal (dano físico):");
        heroi.ReceberDano(1000);
        Console.WriteLine($"{heroi.Nome} - Vida: {heroi.PontosVida} / Vivo: {heroi.EstaVivo}");

        Console.WriteLine("\nTestando dano fatal (dano mágico com escudo):");
        mago.ReceberDano(1000, true);
        Console.WriteLine($"{mago.Nome} - Vida: {mago.PontosVida} / Vivo: {mago.EstaVivo}");
    }
}