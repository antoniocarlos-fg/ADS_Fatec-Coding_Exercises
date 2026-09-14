#include <stdio.h>

int main(){
    int op;
    int N1, N2;

    printf("    Calculadora de numeros inteiros\n\n");
    printf("Insira o numero que representa a operacao que deseja realizar:\n1(+)   2(-)   3(x)  4(/)\n");
    scanf("%d", &op);
    
    printf("Insira o primeiro numero (vira antes do operador): ");
    scanf("%d", &N1);
    printf("Insira o segundo numero (vira apos o operador): ");
    scanf("%d", &N2);

    switch (op){
        case 1:
            printf("%d + %d = %d",N1,N2,N1+N2);
            break;
        case 2:
            printf("%d - %d = %d",N1,N2,N1-N2);
            break;
        case 3:
            printf("%d x %d = %d",N1,N2,N1*N2);
            break;
        case 4:
            printf("%d / %d = %d",N1,N2,N1/N2);
            break;
    }

    return 0;
}