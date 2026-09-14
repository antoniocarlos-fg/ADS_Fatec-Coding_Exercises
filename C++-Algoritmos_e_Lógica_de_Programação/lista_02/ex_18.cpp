#include <iostream>

using namespace std;

int main (){
    int idade;

    cout << "insira a sua idade: ";
    cin >> idade;

    if (idade>=18){
        cout << "maior de idade" << endl;
    } else{
        cout << "menor de idade" << endl;
    }

    return 0;
}