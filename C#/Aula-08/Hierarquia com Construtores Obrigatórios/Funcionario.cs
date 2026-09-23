using System;

public class Funcionario
{
    public string Nome {get; private set;}
    protected decimal SalarioBase {get; set;}

    public Funcionario(string Nome, decimal SalarioBase)
    {
        this.Nome = Nome;
        this.SalarioBase = SalarioBase;
    }
}

public class Gerente : Funcionario
{
    private decimal BonusAnual {get; set;}

    public Gerente(string Nome, decimal SalarioBase, decimal BonusAnual) : base(Nome, SalarioBase)
    {
        this.BonusAnual = BonusAnual;
    }

    public decimal ExibirTotal() {return SalarioBase + BonusAnual;}
}