#include <stdio.h>
#define MAX 10

int main(){
    char vetChar[MAX];
    int vetInt[MAX];

    printf("digite %d caracteres:\n", MAX);
    for(int i=0;i<MAX;i++){
        printf("caractere %d: ", i+1);
        scanf(" %c", &vetChar[i]);

        vetInt[i] = vetChar[i];
    }

    printf("\nCaractere | ASCII\n");
    for(int i=0;i<MAX;i++){
        printf("    %c     |    %d\n", vetChar[i], vetInt[i]);
    }

    return 0;
}