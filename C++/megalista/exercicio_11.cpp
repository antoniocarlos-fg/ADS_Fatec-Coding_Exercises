#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(2);
    
    float val;

    cout << "digite o valor do produto: ";
    cin >> val;

    val = val - 10;

    if(val<=0){
       cout << "desconto ivalido." << endl;
    } else{
    cout << "o valor do produto com desconto eh: R$" << val << endl;
    }

    return 0;
}