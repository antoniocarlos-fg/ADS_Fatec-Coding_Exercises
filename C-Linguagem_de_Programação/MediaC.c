#include <stdio.h>

int main(){
    int N, i;
    int sum = 0;

    printf("Quantas notas irao compor a media?: ");
    scanf("%d", &N);

    for(i=0; i<N; i++){
        int temp;

        printf("Nota %d: ", i+1);
        scanf("%d", &temp);

        sum += temp;
    }

    float med = sum/N;
    printf("Media: %.1f\n", med);

    return 0;
}