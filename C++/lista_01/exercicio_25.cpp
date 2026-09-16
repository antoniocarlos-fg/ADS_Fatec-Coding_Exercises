#include <iostream>
#include <iomanip>

using namespace std;

int main() // conversor hora/minuto/segundo
{
    cout<<fixed<<setprecision(2);

    int hora, min;

    cout<<"insira a quantia de horas: ";
    cin>>hora;
    cout<<"insira a quantia de minutos: ";
    cin>>min;
    while(min>=60)
    {
        cout<<"os minutos nao podem ultrapassar 60, insira novamente: ";
        cin>>min;
    }

    cout<<"\nhoras em minutos: "<<hora*60<<" minutos"<<endl;
    cout<<"total de minutos: "<<hora*60+min<<" minutos"<<endl;
    cout<<"total em segundos: "<<(hora*60+min)*60<<" segundos";

    return 0;
}