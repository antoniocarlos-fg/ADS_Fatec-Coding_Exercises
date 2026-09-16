#include <iostream>
#include <iomanip>

using namespace std;

int main() // Conversor monetário
{
    cout<<fixed<<setprecision(2);

    float brl;        // real brasileiro
    float usd = 1.80; // dólar americano
    float dem = 2.00; // marco alemão
    float gbp = 3.57; // libra esterlina

    cout<<"insira seu saldo em reais: ";
    cin>>brl;

    cout<<"\nesse eh seu dinheiro em"<<endl;
    cout<<"dolares: $"<<brl/usd<<endl;
    cout<<"marco alemao: DM"<<brl/dem<<endl;
    cout<<"libras: "<<brl/gbp<<" libras"<<endl;

    return 0;
}