#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout<<fixed<<setprecision(2);

    float N1, N2;
    int opt;

    cout<<"insira dois numeros:"<<endl;
    cin>>N1>>N2;

    cout<<"1: elevar primeiro numero pelo segundo;"<<endl;
    cout<<"2: raiz quadrada de cada um dos numeros;"<<endl;
    cout<<"3: raiz cubica de cada um dos numeros"<<endl;
    cout<<"qual programa deseja executar?: ";
    cin>>opt;
    
    if (opt<1||opt>3) // checagem
    {
        cout<<"erro!\nopcao invalida.";
        return 1;
    }

    else if (opt==1) // potência
    {
        cout<<N1<<" elevado a "<<N2<<" = "<<pow(N1, N2);
    }

    else if (opt==2) // raiz quadrada
    {
        cout<<"raiz quadrada de "<<N1<<": "<<sqrt(N1)<<endl;
        cout<<"raiz quadrada de "<<N2<<": "<<sqrt(N2);
    }

    else if (opt==3) // raiz cúbica
    {
        cout<<"raiz cubica de "<<N1<<": "<<cbrt(N1)<<endl;
        cout<<"raiz cubica de "<<N2<<": "<<cbrt(N2)<<endl;
    }
    
    return 0;
}