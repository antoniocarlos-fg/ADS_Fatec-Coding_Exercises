#include <iostream>

using namespace std;

int main(){
    float N1;

    cout << "insira o numero: ";
    cin >> N1;

    if (N1>0){
        cout << "seu numero eh positivo."<< endl;
    } else{
        cout << "seu numero eh negativo." << endl;
    }

    return 0;
}