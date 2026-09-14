#define _USE_MATH_DEFINES

#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float raio;

    cout<<"Esferinator 3000\nTudo o que você precisa saber sobre sua esfera! Basta inserir seu raio: ";
    cin>>raio;
    
    while(raio==0)
    {
        cout<<"O valor do raio não pode ser 0, favor inserir novamente: ";
        cin>>raio;
    }

    cout<<"Comprimento circunférico: "<<2*M_PI*raio<<endl;
    cout<<"Área: "<<M_PI*pow(raio, 2)<<"^2"<<endl;
    cout<<"Volume: "<<4.0/3.0*M_PI*pow(raio, 3)<<"^3";

    return 0;
}
