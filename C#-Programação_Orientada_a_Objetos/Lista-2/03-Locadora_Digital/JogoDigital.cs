public class JogoDigital
{
	public string Titulo {get; init;}
	public string Plataforma {get; init;}
	public decimal PrecoDiaria;
	public bool Disponivel;
	
	public JogoDigital(string Titulo, string Plataforma, decimal PrecoDiaria)
	{
		this.Titulo = Titulo;
		this.Plataforma = Plataforma;
		this.PrecoDiaria = PrecoDiaria;
		Disponivel = true;
	}
	
	public decimal CalcularAluguel(int dias) {return dias * PrecoDiaria;}
	public decimal CalcularAluguel(int dias, double percentualDesconto)
	{
		decimal total = PrecoDiaria * dias;
		
		if(percentualDesconto >= 0.0 && percentualDesconto <= 0.50)
		{
			total -= total * (decimal)percentualDesconto;
		}
		
		return total;
	}
}