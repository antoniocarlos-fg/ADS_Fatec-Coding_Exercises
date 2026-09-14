#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main(){
    cout << fixed << setprecision(2);

    float m, h, imc; // peso altura e resultado
    string msg;

    cout << "insira sua altura (metros) e seu peso (quilos), respectivamente: ";
    cin >> h >> m;

    imc = m/pow(h, 2);

    if(imc<16){
        msg = "magreza grave";
    }else if(imc>=16 && imc<17){
        msg = "magreza moderada";
    }else if(imc>=17 && imc<18.5){
        msg = "magreza leve";
    }else if(imc>=18.5 && imc<25){
        msg = "saudavel";
    }else if(imc>=25 && imc<30){
        msg = "sobrepeso";
    }else if(imc>=30 && imc<35){
        msg = "obesidade grau I";
    }else if(imc>=35 && imc<40){
        msg = "obesidade grau II";
    }else{
        msg = "obesidade grau III";
    }

    cout << "seu IMC eh: " << imc << " quilos por metro quadrado." << endl << msg << endl;

    return 0;
}