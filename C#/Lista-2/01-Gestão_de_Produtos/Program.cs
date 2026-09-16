using System;

class Program
{
    static void Main()
    {
        Produto p1 = new Produto(1, "Caneta");
        Produto p2 = new Produto(2, "Caderno", 15.90m);
        Produto p3 = new Produto(3, "Mochila", 129.90m, 10);

        Console.WriteLine($"{p1.Nome}: R${p1.Preco} / Estoque: {p1.QuantidadeEmEstoque}");
        Console.WriteLine($"{p2.Nome}: R${p2.Preco} / Estoque: {p2.QuantidadeEmEstoque}");
        Console.WriteLine($"{p3.Nome}: R${p3.Preco} / Estoque: {p3.QuantidadeEmEstoque}");

        Console.WriteLine("\nTestando valores negativos:");
        p1.Preco = -10;
        p1.QuantidadeEmEstoque = -5;

        Console.WriteLine("\nTestando valores válidos:");
        p1.Preco = 3.50m;
        p1.QuantidadeEmEstoque = 50;
        Console.WriteLine($"{p1.Nome}: R${p1.Preco} / Estoque: {p1.QuantidadeEmEstoque}");

        Console.WriteLine("\nTestando AdicionarEstoque:");
        p1.AdicionarEstoque(20);
        Console.WriteLine($"Estoque agora: {p1.QuantidadeEmEstoque}");

        p1.AdicionarEstoque(30, "Reposição do fornecedor");
        Console.WriteLine($"Estoque agora: {p1.QuantidadeEmEstoque}");
    }
}
