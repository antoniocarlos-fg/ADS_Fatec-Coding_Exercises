#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    cout<<fixed<<setprecision(2);
    
    float preco_V1, preco_V2, aumento;
    string msg;
    
    cout<<"insira o preco do produto: ";
    cin>>preco_V1;
    
    if (preco_V1 < 50)
    {
        aumento = 1.05;
    }
    
    else if (preco_V1 < 100)
    {
        aumento = 1.1;
    }
    
    else
    {
        aumento = 1.15;
    }
    
    preco_V2 = preco_V1 * aumento;
    
    if (preco_V2 < 80)
    {
        msg = "barato";
    }
    
    else if (preco_V2 >= 80 && preco_V2 <= 120)
    {
        msg = "normal";
    }
    
    else if (preco_V2 > 120 && preco_V2 <= 200)
    {
        msg = "caro";
    }
    
    else
    {
        msg = "muito caro";
    }

    cout<<"valor do produto: "<<preco_V2<<endl;
    cout<<"classificacao: "<<msg<<endl;

    return 0;
}