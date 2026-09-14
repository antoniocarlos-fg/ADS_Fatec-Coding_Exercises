#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<fixed<<setprecision(2);
    
    float salario;
    int grat;
    
    cout<<"digite o valor do seu salario: ";
    cin>>salario;
    
    if (salario < 350)
    {
        grat = 100;
    }
    
    else if (salario >= 350 && salario < 600)
    {
        grat = 75;
    }
    
    else if (salario >= 600 && salario < 900)
    {
        grat = 50;
    }
    
    else
    {
        grat = 35;
    }
    
    cout<<"seu salario final sera de: R$"<<salario * 1.07 + grat<<endl;
    
    return 0;
}