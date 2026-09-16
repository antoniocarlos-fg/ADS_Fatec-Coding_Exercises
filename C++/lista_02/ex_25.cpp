#include <iostream>

using namespace std;

int main(){
    float H, hextra, hfalta;
    int premio;

    cout << "insira o numero de horas extra trabalhadas: ";
    cin >> hextra;
    cout << "insira o numero de horas faltadas: ";
    cin >> hfalta;

    H = hextra - (2.0/3.0 * hfalta);

    if(H*60>=2400){
        premio=500;
    }else if(H*60>1800){
        premio=400;
    }else if(H*60>1200){
        premio=300;
    }else if(H*60>600){
        premio=200;
    }else{
        premio=100;
    }

    cout << "o valor da gratificacao do funcionario sera de: R$" << premio << endl;

    return 0;
}