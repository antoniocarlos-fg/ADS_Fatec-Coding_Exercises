#include <iostream>
using namespace std;

int main(){
    float b_maior, b_menor, altura;

    cout<<"Gerador de area de trapezio"<<endl;
    cout<<"\nInsira o tamanho da base maior: ";
    cin>>b_maior;
    cout<<"\nInsira o tamanho da base menor: ";
    cin>>b_menor;
    cout<<"\nInsira a altura do trapezio: ";
    cin>>altura;

    if(b_maior<=b_menor){
        return 0;
    }

    float semicalculo_area = (b_maior+b_menor)*altura;
    
    cout<<"A area do trapezio eh: "<<semicalculo_area/2;
}