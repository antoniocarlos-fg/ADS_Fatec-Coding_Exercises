#include <iostream>

using namespace std;

int main(){
    float N1, N2;

    cout << "insira dois numeros:" << endl;
    cin >> N1 >> N2;

    if(N1==N2){
        cout << "os numeros sao iguais." << endl;
    } else{
        cout << "os numeros nao sao iguais." << endl;
    }

    return 0;
}