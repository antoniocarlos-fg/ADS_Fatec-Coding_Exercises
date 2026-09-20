using System;

class Program{
	static void Main(string[] args){
		Medico M1 = new Medico("Pedro Leite Paiva Bezerra", "674269420");
        Paciente P1 = new Paciente("Giorgian de Arrascaeta", "123.456.789-10");

        M1.Atender(P1);
	}
}