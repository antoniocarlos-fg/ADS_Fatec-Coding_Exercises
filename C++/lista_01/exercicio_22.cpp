#include <iostream>

using namespace std;

int main()
{
    int lados;

    cout<<"Insira o numero de lados do seu poligono: ";
    cin>>lados;
    while (lados==0)
    {
        cout<<"Inválido. Insira novamente: ";
        cin>>lados;
    }

    cout<<"Seu poligono tera "<<lados*(lados-3)/2<<" diagonais.";

    return 0;
}