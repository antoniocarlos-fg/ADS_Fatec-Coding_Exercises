public class Termostato
{
	public double temperaturaAlvo;
	public double TemperaturaAlvo
	{
		get => temperaturaAlvo;
		set
		{
			if(value < 16.0 || value > 30.0)
			{
				Console.WriteLine("A temperatura deve estar entre 16 e 30 graus.");
				if(value<16.0)
				{
					temperaturaAlvo = 16.0;
				}else
				{
					temperaturaAlvo = 30.0;
				}
			}else
			{
				temperaturaAlvo = value;
			}
		}
	}
	public bool Ligado;
	
	public Termostato()
	{
		TemperaturaAlvo = 21.0;
		Ligado = false;
	}
	
	public Termostato(double TemperaturaAlvo)
	{
		this.TemperaturaAlvo = TemperaturaAlvo;
	}
	
	public void Ajustar(double novaTemp)
	{
		TemperaturaAlvo = novaTemp;
	}
	
	public void Ajustar(double novaTemp, bool ligarAparelho)
	{
		TemperaturaAlvo = novaTemp;
		Ligado = ligarAparelho;
	}
}