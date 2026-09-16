#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<fixed<<setprecision(2);

    float salario;

    cout<<"insira o salario que voce recebe: ";
    cin>>salario;

    if(salario<500)
    {
        cout<<"reajuste de salario disponivel!\nseu salario atual: R$"<<salario*1.30;
    }
    else
    {
        cout<<"voce nao tem direito ao aumento de salario.";
    }

    return 0;
}