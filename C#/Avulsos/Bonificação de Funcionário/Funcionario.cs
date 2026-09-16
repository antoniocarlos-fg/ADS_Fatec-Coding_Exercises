using System;
					
public class Funcionario{
	public string Nome {get; set;}
	protected double SalarioBase;
	
	internal void DefinirSalarioBase(double valor){
		if(valor > 1412.00){
			SalarioBase = valor;		
		}
	}
}

public class Gerente : Funcionario{
	public double CalcularBonificacao(){
		return SalarioBase*0.2;
	}
}