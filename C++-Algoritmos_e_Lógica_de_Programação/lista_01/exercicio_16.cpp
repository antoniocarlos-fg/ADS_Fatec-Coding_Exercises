#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float c1, c2;

    cout<<"Hipotenuser 3000\nInsira o valor dos catetos:"<<endl;
    cin>>c1;
    cin>>c2;

    float check = c1*c2;
    while (check==0){
        cout<<"O valor de nenhum cateto pode ser 0, inserir novamente:"<<endl;
        cin>>c1;
        cin>>c2;
    }

    float semi_h = pow(c1, 2)+pow(c2, 2);

    cout<<"A hipotenusa do seu triângulo é igual a: "<<sqrt(semi_h);
}