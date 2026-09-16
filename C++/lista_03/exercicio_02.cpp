#include <iostream>

using namespace std;


int main(){
    int NUM[7] = {1, 2, 3, 4, 5, 6, 7};
    int qtd_x2 = 0;
    int qtd_x3 = 0;
    int qtd_x2x3 = 0;
    int j = 0;

    for(int i = 0; i < 7; i++){
        if(NUM[i]%2==0 && NUM[i]%3==0){
            qtd_x2x3++;
        }else
        if(NUM[i]%2==0){
            qtd_x2++;
        }else
        if(NUM[i]%3==0){
            qtd_x3++;
        }
    }

    j = 0;
    int NUMx2x3[qtd_x2x3];
    for(int i = 0; i < 7; i++){
        if(NUM[i]%2==0 && NUM[i]%3==0){
            NUMx2x3[j] = NUM[i];
            j++;
        }
    }

    j = 0;
    int NUMx2[qtd_x2];
    for(int i = 0; i < 7; i++){
        if(NUM[i]%2==0){
            NUMx2[j] = NUM[i];
            j++;
        }
    }

    j = 0;
    int NUMx3[qtd_x3];
    for(int i = 0; i < 7; i++){
        if(NUM[i]%3==0){
            NUMx3[j] = NUM[i];
            j++;
        }
    }

    cout << "Multiplos de 2: ";
    for(int i = 0; i < qtd_x2; i++){
        cout << NUMx2[i] << " ";
    }
    cout << endl << "Multiplos de 3: ";
    for(int i = 0; i < qtd_x3; i++){
        cout << NUMx3[i] << " ";
    }
    cout << endl << "Multiplos de ambos: ";
    for(int i = 0; i < qtd_x2x3; i++){
        cout << NUMx2x3[i] << " ";
    }

    return 0;
}