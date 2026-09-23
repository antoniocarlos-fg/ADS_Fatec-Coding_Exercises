using System;

public class Veiculo
{
    protected string Marca {get; set;}
    protected string Modelo {get; set;}
    protected int ano {get; set;}

    public Veiculo(string Marca, string Modelo, int ano)
    {
        this.Marca = Marca;
        this.Modelo = Modelo;
        this.ano = ano;
    }

    public void Ligar()
    {
        Console.WriteLine("Veículo ligado com sucesso!");
    }
}

public class Moto : Veiculo
{
    private int Cilindradas {get; set;}

    public Moto(string Marca, string Modelo, int ano, int Cilindradas) : base(Marca, Modelo, ano)
    {
        this.Cilindradas = Cilindradas;
    }

    public void DarGrau()
    {
        Console.WriteLine("Moto empinando!");
    }
}