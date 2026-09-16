#include <iostream>

using namespace std;

int main(){ // intervalo entre 10 e 20
    float num;

    cout << "insira um numero: ";
    cin >> num;

    if (num>= 10 && num<=20){
        cout << "numero dentro do intervalo especificado." << endl;
    } else{
        cout << "numero fora do intervalo especificado." << endl;
    }

    return 0;
}