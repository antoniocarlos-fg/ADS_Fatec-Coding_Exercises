#include <stdio.h>
#include <limits.h>
#define TAM 2

int main(){
    int mat[TAM][TAM];
    int soma=0;
    int maior=INT_MIN;
    int cImpDS=0; // conta impares na diagonal secundaria
    int somaDP=0;
    int somaDS=0;

    printf("a)Injetando dados na matriz...\n");
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            printf("L%d/C%d: ", i+1, j+1);
            scanf("%d", &mat[i][j]);

            soma+=mat[i][j]; // faz a somatória
            if(mat[i][j]>maior){ // encontra o maior número
                maior=mat[i][j];
            }
            if((i+1)+(j+1)==TAM+1){ // faz a soma da diagonal secundaria e conta seus impares
                somaDS+=mat[i][j];
                if(mat[i][j]%2!=0){
                    cImpDS++;
                }
            }
            if(i==j){ // soma os ns. da diagonal principal
                somaDP+=mat[i][j];
            }
        }
    }

    printf("\nb)Matriz:\n");
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }

    printf("c)Somatoria: %d", soma);
    printf("\nd)Maior no.: %d", maior);
    printf("\ne)Ns. impares na diagonal secuncaria: %d", cImpDS);
    printf("\nf)Somatoria da diagonal principal: %d", somaDP);
    printf("\ng)Diferenca da somatoria das diagonais: %d", somaDP-somaDS);
    printf("\nh)Matriz dobrada:\n");

    for(int i=0;i<TAM;i++){ // dobra a matriz original
        for(int j=0;j<TAM;j++){
            printf("%d  ", mat[i][j]*2);
        }
        printf("\n");
    }

    printf("i)Matriz dobrada em linha par:\n");
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if((i+1)%2==0){
                printf("%d  ", mat[i][j]*2);
            }else{
                printf("%d  ", mat[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}