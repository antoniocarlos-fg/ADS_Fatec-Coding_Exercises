using System;

class Program{
	static void Main(string[] args){
		Gerente G1 = new Gerente();
		
		G1.DefinirSalarioBase(10000);
		Console.WriteLine(G1.CalcularBonificacao());
	}
}