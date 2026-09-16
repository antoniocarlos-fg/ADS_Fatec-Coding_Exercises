#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<fixed<<setprecision(2);
    
    float N1, N2, media;
    int qt_notas = 2;
    
    cout<<"digite suas notas: "<<endl;
    cin>>N1>>N2;
    
    media = (N1+N2)/qt_notas;
    
    if (media >= 7)
    {
        cout<<"media: "<<media<<"\naprovado.";
    } else if (media >= 3 && media < 7)
    {
        cout<<"media: "<<media<<"\nexame.";
    } else
    {
        cout<<"media: "<<media<<"\nreprovado.";
    }
    
    return 0;
}
