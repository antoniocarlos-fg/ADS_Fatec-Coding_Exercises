#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<fixed<<setprecision(2);

    float ang_1, ang_2;

    cout<<"Insira os angulos do seu triangulo:"<<endl;
    cin>>ang_1;
    cin>>ang_2;

    cout<<"O terceiro angulo eh de "<<180-(ang_1+ang_2)<<" graus.";

    return 0;
}