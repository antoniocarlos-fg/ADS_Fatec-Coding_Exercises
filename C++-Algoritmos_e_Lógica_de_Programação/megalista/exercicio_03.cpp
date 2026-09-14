#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int ano;

    cout << "insira o ano: ";
    cin >> ano;

    if(ano % 4 == 0){
        cout << "seu ano eh bissexto." << endl;
    } else if(ano % 100 == 0){
        cout << "seu ano eh bissexto." << endl;
    } else if(ano % 400 == 0){
        cout << "seu ano eh bissexto." << endl;
    } else{
        cout << "seu ano nao eh bissexto." << endl;
    }

    return 0;
}