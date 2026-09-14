#include <iostream>

using namespace std;

int main()
{
    float N1, N2, N3;
    
    cout<<"insira tres numeros:"<<endl;
    cin>>N1>>N2>>N3;
    
    if (N1>N2 && N1>N3)
    {
        cout<<"o maior numero eh "<<N1;
    }else if (N2>N1 && N2>N3)
    {
        cout<<"o maior numero eh "<<N2;
    }else if (N3>N1 && N3>N2)
    {
        cout<<"o maior numero eh "<<N3;
    }

    return 0;
}