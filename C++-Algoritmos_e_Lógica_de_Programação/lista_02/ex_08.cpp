#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<fixed<<setprecision(2);

    float salario;

    cout<<"digite o valor do seu salario: ";
    cin>>salario;

    if (salario<=300)
    {
        salario = salario*1.35;
    }
    else
    {
        salario = salario*1.15;
    }

    cout<<"salario reajustado.\nseu novo salario eh: R$"<<salario;

    return 0;
}