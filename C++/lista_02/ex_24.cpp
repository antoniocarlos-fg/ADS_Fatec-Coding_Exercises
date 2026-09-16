#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    cout << fixed << setprecision(2);

    float preco_V1, preco_V2, taxa_aumento, imposto;
    int categoria;
    char situacao;
    string msg;

    cout << "insira o preco do produto: ";
    cin >> preco_V1;
    cout << "insira a categoria do produto de acordo com a tabela:" << endl;
    cout << "1. limpeza\n2. alimento\n3. vestuario" << endl;
    cin >> categoria;

    if(preco_V1<=25){
        if(categoria==1){
            taxa_aumento=1.05;
        }else if(categoria==2){
            taxa_aumento=1.08;
        }else if(categoria==3){
            taxa_aumento=1.1;
        }else{
            cout << "erro: categoria invalida." << endl;
            return 1;
        }
    }else{
        if(categoria==1){
            taxa_aumento=1.12;
        }else if(categoria==2){
            taxa_aumento=1.15;
        }else if(categoria==3){
            taxa_aumento=1.18;
        }else{
            cout << "erro: categoria invalida." << endl;
            return 1;
        }
    }

    cout << "qual a situacao do produto?:" << endl;
    cout << "R para: precisa de refrigeracao\nN para: nao precisa de refrigeracao" << endl;
    cin >> situacao;

    if(situacao=='R'||categoria==2){
        imposto = preco_V1*0.05;
    }else{
        imposto = preco_V1*0.08;
    }

    preco_V2 = preco_V1*taxa_aumento-imposto;

    if(preco_V2<=50){
        msg = "barato";
    }else if(preco_V2<120){
        msg = "normal";
    }else if(preco_V2>=120){
        msg = "caro";
    }

    cout << "o valor do aumento foi de: R$" << (taxa_aumento*preco_V1)-preco_V1 << endl;
    cout << "o valor do imposto foi de: R$" << imposto << endl;
    cout << "o novo preco eh: R$" << preco_V2 << endl;
    cout << "o produto foi classificado como: " << msg << endl;

    return 0;
}