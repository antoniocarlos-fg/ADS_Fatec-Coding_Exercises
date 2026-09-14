#include <iostream>
using namespace std;

int main(){
    float massa;

    cout<<"Calculadora de massa corporal\nInsira a sua massa atual em quilogramas: ";
    cin>>massa;

    float ganho = (massa/100)*15;
    float perda = (massa/100)*20;

    cout<<"Essa eh sua massa caso voce"<<endl;
    cout<<"Engordasse 15%: "<<massa+ganho<<"Kg."<<endl;
    cout<<"Emagrecesse 20%: "<<massa-perda<<"Kg."<<endl;
}