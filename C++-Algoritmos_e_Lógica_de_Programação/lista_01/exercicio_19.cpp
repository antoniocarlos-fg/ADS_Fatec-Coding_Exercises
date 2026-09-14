#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    cout<<fixed<<setprecision(2);

    float lado1, lado2;

    cout<<"Illuminator 3000\nInsira a largura e o comprimento do seu cômodo:"<<endl;
    cin>>lado1;
    cin>>lado2;

    float check=lado1*lado2;
    while (check==0)
    {
        cout<<"Seu cômodo não pode ter 0 como largura/comprimento! Tente novamente."<<endl;
        cin>>lado1;
        cin>>lado2;
    }

    cout<<"Serão necessários "<<(lado1*lado2)*18<<"W para iluminar seu cômodo.";
}