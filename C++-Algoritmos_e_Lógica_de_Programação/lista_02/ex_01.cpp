#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<fixed<<setprecision(2);
    
    float N1, N2, N3, N4;
    
    cout<<"digite suas notas:"<<endl;
    cin>>N1>>N2>>N3>>N4;
    
    float media = (N1+N2+N3+N4)/4;
    
    if (media >= 7)
    {
        cout<<"media: "<<media<<"\naprovado.";
    } else
    {
        cout<<"media: "<<media<<"reprovado.";
    }
    
    return 0;
}