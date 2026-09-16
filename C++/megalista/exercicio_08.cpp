#include <iostream>

using namespace std;

int main(){
    float nota;

    cout << "digite a nota: ";
    cin >> nota;

    if (nota>=7){
        cout << "aluno aprovado!" << endl;
    } else if(nota>=5){
        cout << "aluno em recuperacao." << endl;
    } else{
        cout <<"aluno reprovado." << endl;
    }

    return 0;
}