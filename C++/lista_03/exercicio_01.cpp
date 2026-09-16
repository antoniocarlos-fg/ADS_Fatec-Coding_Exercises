#include <iostream>

using namespace std;


int main(){
    int num[] = {1, 28, 48, 29, 37, 69};
    int par_count = 0;
    int impar_count = 0;

    for(int i = 0; i < 6; i++){
        if(num[i]%2==0){
            par_count++;
        }else{
            impar_count++;
        }
    }

    int j = 0;
    int par[par_count];
    for(int i = 0; i < 6; i++){
        if(num[i]%2==0){
            par[j] = num[i];
            j++;
        }
    }

    j = 0;
    int impar[impar_count];
    for(int i = 0; i < 6; i++){
        if(num[i]%2!=0){
            impar[j] = num[i];
            j++;
        }
    }

    cout << "Numeros pares: ";
    for(int i = 0; i < par_count; i++){
        cout << par[i] << " ";
    }
    cout << endl << "Total de pares: " << par_count << endl;

    cout << "Numeros impares: ";
    for(int i = 0; i < impar_count; i++){
        cout << impar[i] << " ";
    }
    cout << endl << "Total de impares: " << impar_count << endl;

    return 0;
}