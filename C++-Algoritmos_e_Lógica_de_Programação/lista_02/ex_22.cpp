#include <iostream>

using namespace std;

int main(){
    int idade, grupo;
    float peso;

    cout << "digite, respectivamente, a idade e peso do individuo:" << endl;
    cin >> idade >> peso;

    if(idade<20&&peso<60){
        grupo = 9;
    }else if(idade<20&&peso<=90){
        grupo = 8;
    }else if(idade<20&&peso>90){
        grupo = 7;
    }else if(idade<50&&peso<60){
        grupo = 6;
    }else if(idade<50&&peso<=90){
        grupo = 5;
    }else if(idade<50&&peso>90){
        grupo = 4;
    }else if(idade>=50&&peso<60){
        grupo = 3;
    }else if(idade>=50&&peso<=90){
        grupo = 2;
    }else if(idade>=50&&peso>90){
        grupo = 1;
    }

    cout << "o individuo se encaixa no grupo de risco: " << grupo << endl;

    return 0;
}