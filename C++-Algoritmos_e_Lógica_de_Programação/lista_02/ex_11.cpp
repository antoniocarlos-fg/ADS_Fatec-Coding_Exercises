#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<fixed<<setprecision(2);
    
    float salario_inic, salario_fin, aumento;
    
    cout<<"digite o valor do seu salario: ";
    cin>>salario_inic;
    
    if (salario_inic < 300)
    {
        aumento = 1.15;
    }
    
    else if (salario_inic >= 300 && salario_inic < 600)
    {
        aumento = 1.10;
    }
    
    else if (salario_inic >= 600 && salario_inic < 900)
    {
        aumento = 1.05;
    }
    
    else
    {
        cout<<"nao ha aumento disponivel para o seu salario.";
        return 0;
    }
    
    salario_fin = salario_inic * aumento;
    
    cout<<"seu novo salario eh: R$"<<salario_fin<<endl;
    
    return 0;
}