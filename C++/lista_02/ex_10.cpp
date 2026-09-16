#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<fixed<<setprecision(2);

    float custo_fabrica, custo_final, taxa_dist, taxadd;

    cout<<"insira o custo de fabrica do veiculo: ";
    cin>>custo_fabrica;

    if(custo_fabrica<12000)
    {
        taxa_dist = 0.05;
        taxadd = 0;
    }

    else if(custo_fabrica>=12000 && custo_fabrica<25000)
    {
        taxa_dist = 0.10;
        taxadd = 0.15;
    }

    else
    {
        taxa_dist = 0.15;
        taxadd = 0.2;
    }

    custo_final = custo_fabrica + (custo_fabrica*taxa_dist) + (custo_fabrica*taxadd);

    cout<<"o custo do veiculo ao consumidor sera de: R$"<<custo_final;

    return 0;
}