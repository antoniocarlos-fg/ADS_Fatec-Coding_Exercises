#include <iostream>
#include <string>

using namespace std;

int main(){
    int idade;
    string msg;

    cout << "insira a idade do nadador: ";
    cin >> idade;

    if (idade<5){
        cout << "erro: idade invalida.";
        return 1;
    } else if (idade<=7){
        msg = "infantil";
    } else if (idade<=10){
        msg = "juvenil";
    } else if (idade<=15){
        msg = "adolescente";
    } else if (idade<=30){
        msg = "adulto";
    } else{
        msg = "senior";
    }

    cout << "nadador de categoria: " << msg << endl;

    return 0;
}