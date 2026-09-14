using System;

class Program{
	static void Main(string[] args){
		ContaBancaria conta1 =  new ContaBancaria();
		
		conta1.Depositar(500);
		Console.WriteLine(conta1.Saldo);
		conta1.Sacar(501);
		Console.WriteLine(conta1.Saldo);
	}
}