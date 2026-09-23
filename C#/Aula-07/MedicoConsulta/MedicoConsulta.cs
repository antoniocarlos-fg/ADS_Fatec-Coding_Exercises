using System;

public class Paciente
{
    public string Nome;
    public string Cpf;

    public Paciente(string Nome, string Cpf)
    {
        this.Nome = Nome;
        this.Cpf = Cpf;
    }
}



public class Medico
{
    private string Nome;
    private string Crm;

    public void Atender(Paciente p)
    {
        Console.WriteLine($"O Dr. {Nome} atende {p.Nome} (CPF: {p.Cpf})");
    }

    public Medico(string Nome, string Crm)
    {
        this.Nome = Nome;
        this.Crm = Crm;
    }
}

