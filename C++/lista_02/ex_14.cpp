#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(2);

    float salario, taxa;

    cout << "insira o valor do seu salario: ";
    cin >> salario;

    if (salario<300){
        taxa = 1.5;
    } else if (salario<500){
        taxa = 1.4;
    } else if (salario<700){
        taxa = 1.3;
    } else if (salario<800){
        taxa = 1.2;
    } else if (salario<1000){
        taxa = 1.1;
    } else{
        taxa = 1.05;
    }

    cout << "seu novo salario sera de: R$" << salario*taxa << endl;

    return 0;
}