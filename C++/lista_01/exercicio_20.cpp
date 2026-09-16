#include <iostream>
#include <locale.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    cout<<fixed<<setprecision(2);

    float ang, cateto_a, hipotenusa, rad;

    cout<<"Insira a medida do ângulo em graus: ";
    cin>>ang;

    cout<<"Insira a distância entre a ponta da escada e a parede: ";
    cin>>cateto_a;

    rad = (ang*3.14)/180;
    hipotenusa = cateto_a/cos(rad);
    cout<<"O tamanho da escada será: "<<hipotenusa;

    return 0;
}


