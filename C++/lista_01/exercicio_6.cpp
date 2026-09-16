#include <iostream>
using namespace std;

int main(){
    int salario_fixo, vendas_total;
    int porcentagem_comissao=4;

    cout<<"Calculadora de salario\nInsira seu salario: ";
    cin>>salario_fixo;
    cout<<"\nInsira o valor total das suas vendas: ";
    cin>>vendas_total;

    float vendas_porcentagem = (vendas_total/100)*porcentagem_comissao;
    float salario_total = salario_fixo + vendas_porcentagem;

    cout<<"\nO seu salario total e: "<<salario_total;
}