#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<fixed<<setprecision(2);
    
    float N1, N2;
    int opt;
    
    cout<<"digite dois numeros:"<<endl;
    cin>>N1>>N2;
    
    cout<<"1: media\n2: subtracao maior/menor\n3: multiplicacao\n4: divisao primeiro/segundo"<<endl;
    cout<<"qual programa deseja executar?: ";
    cin>>opt;
    if(opt<1||opt>4)
    {
        cout<<"erro\nopcao invalida";
        return 1;
    }
    
    if(opt==1) // media
    {
        cout<<"media = "<<(N1+N2)/2;
    }
    
    else if(opt==2) // subtração 
    {
        if(N1>N2)
        {
            cout<<"subtracao = "<<N1-N2;
        }
        else if(N2>N1)
        {
            cout<<"subtracao = "<<N2-N1;
        }
        else if(N1==N2)
        {
            cout<<"subtracao = 0";
        }
    }
    
    else if(opt==3) // multiplicação
    {
        cout<<"multiplicacao = "<<N1*N2;
    }
    
    else if(opt==4) // divisão
    {
        while(N2==0)
        {
            cout<<"o segundo numero nao pode ser 0\ndigite-o novamente: ";
            cin>>N2;
        }
        cout<<"divisao = "<<N1/N2;
    }

    return 0;
}