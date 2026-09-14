public class CalculadoraFinanceira
{
    public double CalcularJuros(double valorBase) {return valorBase += valorBase*0.1;}
    public double CalcularJuros(double valorBase, double taxa) {return valorBase += valorBase*(taxa/100);}
    public double CalcularJuros(double valorBase, double taxa, int meses) {return valorBase += meses*(valorBase*(taxa/100));}
}