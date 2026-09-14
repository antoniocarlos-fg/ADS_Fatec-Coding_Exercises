using System;

class Program{
	static void Main(string[] args){
		CalculadoraFinanceira fincalc =  new CalculadoraFinanceira();
		
		Console.WriteLine(fincalc.CalcularJuros(100));
        Console.WriteLine(fincalc.CalcularJuros(100, 20));
        Console.WriteLine(fincalc.CalcularJuros(100, 10, 2));
	}
}