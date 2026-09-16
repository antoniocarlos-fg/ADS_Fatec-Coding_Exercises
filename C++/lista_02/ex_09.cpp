#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<fixed<<setprecision(2);

    float saldo_medio, credito;

    cout<<"insira o valor do seu saldo medio no ultimo ano: ";
    cin>>saldo_medio;

    if (saldo_medio>=400)
    {
        credito = saldo_medio*0.3;
    }
    else if (saldo_medio>=300 && saldo_medio<400)
    {
        credito = saldo_medio*0.25;
    }
    else if (saldo_medio>=200 && saldo_medio<300)
    {
        credito = saldo_medio*0.20;
    }
    else
    {
        credito = saldo_medio*0.10;
    }

    cout<<"seu saldo medio: "<<saldo_medio<<endl;
    cout<<"seu credito: "<<credito;

    return 0;
}