using System;

public class ContaBancaria()
{
    protected decimal Saldo {get; set;}

    public ContaBancaria(decimal Saldo) {this.Saldo = Saldo;} // consertar isso

    public decimal ConsultarSaldo() {return this.Saldo;}
}

public class ContaEspecial : ContaBancaria
{
    private decimal LimiteChequeEspecial {get; set;}

    public ContaEspecial(decimal Saldo, decimal LimiteChequeEspecial) : base(Saldo) {this.LimiteChequeEspecial = LimiteChequeEspecial;}

    public void Sacar(decimal valor)
    {
        if (valor <= LimiteChequeEspecial + this.Saldo)
        {
            Saldo -= valor;
        }
        else
        {
            return; // jogar erro
        }
    }
}