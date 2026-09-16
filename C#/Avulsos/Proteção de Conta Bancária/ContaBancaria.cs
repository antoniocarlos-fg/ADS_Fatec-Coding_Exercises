using System;
					
public class ContaBancaria{
	public string NumeroConta {get; init;}
	public string Titular {get; set;}
	public double Saldo {get; private set;}
	
	public void Depositar(double valor){
		if(valor > 0){
			Saldo += valor;
		}else{
			Console.WriteLine("ERRO: O valor de depósito inserido precisa ser positivo.");
		}
	}
	
	public void Sacar(double valor){
		if(valor <= 0){
			Console.WriteLine("ERRO: O valor de saque inserido precisa ser positivo.");
		}else if(Saldo < valor){
			Console.WriteLine("ERRO: Saldo insuficiente para realização do saque.");
		}else{
			Saldo -= valor;
		}
	}
}