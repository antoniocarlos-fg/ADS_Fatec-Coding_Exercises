#include <iostream>
#include <string>

using namespace std;

int main(){
    int cod;
    float valor;
    string msg;

    cout << "digite o valor do produto: ";
    cin >> valor;
    cout << "digite o codigo de origem do produto: ";
    cin >> cod;

    if(cod==1){
        msg="sul";
    }else if(cod==2){
        msg="norte";
    }else if(cod==3){
        msg="leste";
    }else if(cod==4){
        msg="oeste";
    }else if(cod==5&&cod==6){
        msg="nordeste";
    }else if(cod>=7&&cod<=9){
        msg="sudeste";
    }else if(cod>=10&&cod<=20){
        msg="centro-oeste";
    }else if(cod>=21&&cod<=30){
        msg="nordeste";
    }else{
        cout << "erro: codigo de origem invalido." << endl;
        return 1;
    }

    cout << "procedencia do produto: " << msg << endl;

    return 0;
}