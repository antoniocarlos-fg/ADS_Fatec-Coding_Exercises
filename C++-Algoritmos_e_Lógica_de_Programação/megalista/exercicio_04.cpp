#include <iostream>
#include <string>

using namespace std;

int main(){
    int num;
    string msg;

    cout << "insira um numero: ";
    cin >> num;

    if (num % 2 == 0){
        msg = "par";
    } else{
        msg = "impar";
    }

    cout << "seu numero eh " << msg << endl;

    return 0;
}