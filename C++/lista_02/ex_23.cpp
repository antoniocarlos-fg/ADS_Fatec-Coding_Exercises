#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(2);

    int cod, qtd;
    float desconto, valor_fin, valor_unit, valor_nota;

    cout << "insira o codigo do produto comprado: ";
    cin >> cod;
    cout << "insira a quantidade do produto comprado: ";
    cin >> qtd;

    if(cod>=1&&cod<=10){
        valor_unit=10;
    }else if(cod<=20){
        valor_unit=15;
    }else if(cod<=30){
        valor_unit=20;
    }else if(cod<=40){
        valor_unit=30;
    }else{
        cout << "erro: codigo de produto invalido." << endl;
        return 1;
    }

    valor_nota = valor_unit * qtd;

    if(valor_nota<250){
        desconto=0.05;
    }else if(valor_nota<500){
        desconto=0.1;
    }else{
        desconto=0.15;
    }

    valor_fin = valor_nota - (valor_nota*desconto);

    cout << "o valor final da compra sera de: R$" << valor_fin << endl;

    return 0;
}