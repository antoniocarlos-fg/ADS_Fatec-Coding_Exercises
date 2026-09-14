#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    cout << fixed << setprecision(2);

    float valor, taxa;
    int opt;

    cout << "que tipo de investimento deseja fazer? digite:" << endl;
    cout << "1 para poupanca" << endl;
    cout << "2 para fundos de renda fixa" << endl;
    cin >> opt;

    if (opt<1 || opt>2){
        cout << "erro, opcao invalida." << endl;
        return 1;
    }

    if (opt==1){
        taxa = 1.03;
    } else{
        taxa = 1.04;
    }

    cout << "insira o valor a ser investido: ";
    cin >> valor;

    cout << "seu valor apos um mes de investimento sera de: R$" << valor*taxa << endl;

    return 0;
}