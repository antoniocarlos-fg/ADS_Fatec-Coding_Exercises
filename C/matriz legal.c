#include <stdio.h>
#define TAM 2

int main(){
    int mat[TAM][TAM];

    printf("Injetando dados na matriz...\n");
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            printf("L%d/C%d", i+1, j+1);
            scanf(" %d", &mat[i][j]);
        }
    }
}