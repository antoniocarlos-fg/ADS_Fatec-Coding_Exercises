#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    cout<<fixed<<setprecision(2);

    float celsius;

    cout<<"Conversor para Fahrenheit\nInsira o valor da temperatura em celsius: ";
    cin>>celsius;

    cout<<"Sua temperatura em Fahrenheit é: "<<(celsius*9.0/5.0)+32<<"F";
}