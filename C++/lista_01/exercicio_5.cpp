#include <iostream>
using namespace std;

int main(){
    int valor;
    int desconto = 100-10; //em caso de mudança de desconto, alterar o número à direita da subtração

    cout<<"Calculadora de desconto"<<endl;
    cout<<"Insira o valor do produto: ";
    cin>>valor;
    cout<<"O valor com desconto e: R$"<<(valor/100)*desconto;
}