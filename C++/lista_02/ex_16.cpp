#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    cout << fixed << setprecision(2);

    int cod;
    float preco, desconto;

    cout << "insira o valor do produto: ";
    cin >> preco;
    cout << "digite o codigo do produto: ";
    cin >> cod;

    if (preco<30){
        desconto = 0;
    } else if (preco<100){
        desconto = 0.1;
    } else{
        desconto = 0.15;
    }

    cout << "o valor do produto com desconto sera de: R$" << preco - (preco*desconto) << endl;

    return 0;
}