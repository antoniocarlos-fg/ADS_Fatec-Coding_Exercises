using System;
					
namespace Aula {
	public class Program
	{
		public static void Main()
		{
			Calculadora calc = new Calculadora();
			int soma = calc.Somar(5, 10);      // -> Chama a Sobrecarga 1
			double somaDouble = calc.Somar(2.5, 3.1);    //-> Chama a Sobrecarga 3
			
			Console.WriteLine($"{soma}, {somaDouble}");
		}
	}
}