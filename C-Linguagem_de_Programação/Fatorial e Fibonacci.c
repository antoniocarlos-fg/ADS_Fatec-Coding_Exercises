#include <stdio.h>
#include <stdlib.h>

int fatorial (int x){
    if (x==1)
        return 1;
    return x*fatorial(x-1);
}

int fibonacci (int x){
    if (x==0)
        return 0;
    if (x==1)
        return 1;
    return fibonacci(x-1)+fibonacci(x-2);
    
}

int main(){
    int y;
    printf("\nDigite um numero para calcular o fatorial: ");
    scanf("%d", &y);
    printf("\n\nO fatorial do numero digitado eh %d\n\n", fatorial(y));

    printf("\nDigite um numero para calcular o seu fibonacci: ");
    scanf("%d", &y);
    printf("\n\nO fibonacci do numero digitado eh %d\n\n", fibonacci(y));

    return 0;
}