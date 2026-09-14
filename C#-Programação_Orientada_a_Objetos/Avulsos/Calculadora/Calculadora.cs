namespace Aula {
	public class Calculadora 
	{
		// Sobrecarga 1: Soma dois inteiros
		public int Somar(int a, int b) { return a + b; }

		// Sobrecarga 2: Soma tres inteiros
		public int Somar(int a, int b, int c) { return a + b + c; }

		// Sobrecarga 3: Soma dois numeros decimais (double)
		public double Somar(double a, double b) { return a + b; }
	}
}