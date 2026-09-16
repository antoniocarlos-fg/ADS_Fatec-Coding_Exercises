#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(2);

    float altura, peso_ideal;
    int opt;

    cout << "informe sua altura em metros: ";
    cin >> altura;
    cout << "informe seu genero:" << endl << "para masculino, digite 1\npara feminino, digite 2" << endl;
    cin >> opt;

    if (opt==1){
        peso_ideal = (72.7*altura)-58;
    } else if (opt==2){
        peso_ideal = (62.1*altura)-44.7;
    } else{
        cout << "erro. opcao invalida.";
        return 1;
    }

    cout << "seu peso ideal sera de: " << peso_ideal << " quilos." << endl;

    return 0;
}