#include <iostream>

using namespace std;

int main()
{
    float N1, N2;
    
    cout<<"insira dois numeros:"<<endl;
    cin>>N1>>N2;
    
    if (N1>N2)
    {
        cout<<"o maior numero eh "<<N1;
    }else
    {
        cout<<"o maior numero eh "<<N2;
    }

    return 0;
}