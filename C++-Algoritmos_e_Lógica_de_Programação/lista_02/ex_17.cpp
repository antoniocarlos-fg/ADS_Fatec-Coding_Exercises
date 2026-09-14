#include <iostream>

using namespace std;

int main (){
    int senha;

    cout << "senha: ";
    cin >> senha;

    if (senha==4531){
        cout << "senha correta, acesso permitido." << endl;
    } else{
        cout << "senha incorreta, acesso negado." << endl;
    }

    return 0;
}