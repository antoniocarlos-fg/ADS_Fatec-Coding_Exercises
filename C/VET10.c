#include <stdio.h>

int main(){
    int vet[10], vet2[10];
    int somatoria=0;
    int maior, menor, menpos;
    int somaIMP=0;
    int qtdiv3=0;

    printf("a) Carregar o vetor com numeros digitados pelo usuario:\n");
    for(int i = 0; i < 10; i++){
        printf("Digite o numero da posicao %d do vetor: ", i+1);
        scanf("%d", &vet[i]);

        somatoria+=vet[i];

        if(vet[i]%2!=0){
            somaIMP+=vet[i];
        }

        if(i==0){
            menor=vet[i];
            menpos=1;
        }else if(menor>vet[i]){
            menor=vet[i];
            menpos=i+1;
        }

        if(i==0){
            maior=vet[i];
        }else if(vet[i]>maior){
            maior = vet[i];
        }

        if(vet[i]%3==0){
            qtdiv3+=1;
        }
    }

    printf("\nb) Mostrar o vetor na tela:\n");
    for(int i=0; i<10; i++){
        printf("%d ", vet[i]);
    }

    printf("\n\nc) Dobrar os elementos do vetor, porem apenas os numeros pares:\n");
    for(int i=0; i<10; i++){
        if(vet[i]%2==0){
            printf("%d ", vet[i]*2);
        }else{
            printf("%d ", vet[i]);
        }
    }

    printf("\n\nd) Dobrar todos os elementos do vetor:\n");
    for(int i=0; i<10; i++){
        printf("%d ", vet[i]*2);
    }

    printf("\n\ne) Calcular e imprimir a somatoria dos numeros do vetor: %d", somatoria);

    printf("\n\nf) Calcular e imprimir o maior elemento do vetor: %d", maior);

    printf("\n\ng) Calcular e imprimir a somatoria dos numeros impares do vetor: ");
    if(somaIMP==0){
        printf("\nNao ha numeros impares no vetor.");
    }else{
        printf("%d", somaIMP);
    }
    
    printf("\n\nh) Calcular e imprimir a quantidade de numeros divisiveis por 3 que estao no vetor: %d", qtdiv3);

    printf("\n\ni) Encontrar a posicao do menor elemento do vetor e imprimir a posicao na tela do computador:");
    printf("\nO menor elemento se encontra na posicao %d do vetor", menpos);

    printf("\n\nj/f) Criar um segundo vetor que armazena o inverso do primeiro e depois imprimi-los lado a lado:\nOriginal: ");
    for(int i=0; i<10; i++){
        printf("%d ", vet[i]);
        vet2[i]=vet[10-(i+1)];
    }
    printf("\nInvertido: ");
    for(int i=0; i<10; i++){
        printf("%d ", vet2[i]);
    }
}