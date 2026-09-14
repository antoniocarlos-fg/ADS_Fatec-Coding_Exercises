public class PersonagemRPG
{
    public string Nome;
    public int PontosVida;
    public int PontosMana;
    public int Nivel;

    public bool EstaVivo => PontosVida > 0;
   
    public PersonagemRPG(string Nome)
    {
        this.Nome = Nome;
        PontosVida = 100;
        PontosMana = 50;
        Nivel = 1;
    }

    public PersonagemRPG(string Nome, int PontosVida, int PontosMana)
    {
        this.Nome = Nome;
        this.PontosVida = PontosVida;
        this.PontosMana = PontosMana;
        Nivel = 1;
    }

    public void ReceberDano(int danoFisico)
    {
        if(PontosVida - danoFisico <= 0)
        {
            PontosVida = 0;
            Console.WriteLine($"{Nome} está morto!");
        }
        else
        {
            PontosVida -= danoFisico;
        }
    }

    public void ReceberDano(int danoMagico, bool possuiEscudo)
    {
        if (possuiEscudo)
        {
            if(PontosVida - (danoMagico/2) <= 0)
            {
            PontosVida = 0;
            Console.WriteLine($"{Nome} está morto!");
            }
            else
            {
                PontosVida -= danoMagico/2;
            }
        }
        else
        {
            if(PontosVida - danoMagico <= 0)
            {
                PontosVida = 0;
                Console.WriteLine($"{Nome} está morto!");
            }
            else
            {
                PontosVida -= danoMagico;
            }
        }
    }
}