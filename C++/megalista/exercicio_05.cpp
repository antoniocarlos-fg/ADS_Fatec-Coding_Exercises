#include <iostream>

using namespace std;

int main(){
    int idade;

    cout << "insira sua idade: ";
    cin >> idade;

    if(idade>=16){
        cout << "você pode votar." << endl;
    }else{
        cout << "você não pode votar." << endl;
    }

    return 0;
}