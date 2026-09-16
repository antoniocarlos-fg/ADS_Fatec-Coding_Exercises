#include <iostream>

using namespace std;

int main(){
    float N1, N2, N3, resp;

    cout << "insira seus 3 numeros: ";
    cin >> N1 >> N2 >> N3;

    if (N1>N2 && N1>N3){
        resp = N1;
    } else if (N2>N1 && N2>N3){
        resp = N2;
    } else{
        resp = N3;
    }

    cout << "o maior numero eh " << resp << endl;
    
    return 0;
}