#include <stdio.h>

int main(){
    int N = 0;
    int sum = 0;
    int opt = 1;

    printf("Calculadora de media de notas\n\n");

    while(opt==1){
        int temp;
        N++;

        printf("Nota %d: ", N);
        scanf("%d", &temp);

        sum += temp;

        printf("Deseja finalizar e receber a media ou continuar digitando notas? Digite:\n1 para continuar     0 para finalizar\n");
        scanf("%d", &opt);
        while(opt!=0 && opt!=1){
            printf("Invalido. Digite:\n1 para continuar     0 para finalizar\n");
            scanf("%d", &opt);
        }
    }

    float med = sum/N;
    printf("Media: %.1f\n", med);

    return 0;
}