#include <iostream>

using namespace std;

int main(){
    float N1, N2, N3;
    float pos1, pos2, pos3;

    cout << "insira 3 numeros:" << endl;
    cin >> N1 >> N2 >> N3;

    if(N1 <= N2 && N1 <= N3){
        pos1 = N1;
        if (N2 <= N3) {
            pos2 = N2;
            pos3 = N3;
        } else {
            pos2 = N3;
            pos3 = N2;
        }
    } else if(N2 <= N1 && N2 <= N3){
        pos1 = N2;
        if (N1 <= N3){
            pos2 = N1;
            pos3 = N3;
        } else{
            pos2 = N3;
            pos3 = N1;
        }
    } else{
        pos1 = N3;
        if(N1 <= N2){
            pos2 = N1;
            pos3 = N2;
        } else{
            pos2 = N2;
            pos3 = N1;
        }
    }

    cout << "numeros em ordem crescente: ";
    cout << pos1 << " " << pos2 << " " << pos3 << endl;

    return 0;
}