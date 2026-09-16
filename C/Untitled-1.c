#include <stdio.h>
#include <stdlib.h> // system()
#define TAM 5

int main() {
    int pilha[TAM];
    int op, val;
    int topo = -1;

    do {
        system("cls"); // no Linux seria system("clear")
        printf("* * * *  EMPILHADEIRA   * * * *\n");
        printf("1. Empilhar\n");
        printf("2. Desempilhar\n");
        printf("3. Exibir a pilha\n");
        printf("0. Finalizar\n");
        printf("--------------------------------------\n");
        printf("Escolha: ");
        scanf(" %d", &op); // <-- espaço antes de %d evita lixo/ENTER

        switch(op) {
            case 1:
                if (topo == TAM - 1) {
                    printf("Pilha cheia.\n");
                } else {
                    printf("Valor: ");
                    scanf(" %d", &val); // idem aqui
                    topo++;
                    pilha[topo] = val;
                    printf("Valor %d empilhado.\n", val);
                }
                break;
            
            case 2:
                if (topo == -1) {
                    printf("Pilha vazia.\n");
                } else {
                    printf("Valor %d desempilhado\n", pilha[topo]);
                    topo--;
                }
                break;

            case 3:
                if (topo == -1) {
                    printf("Pilha vazia.\n");
                } else {
                    printf("Pilha:\n");
                    for (int i = topo; i >= 0; i--) {
                        printf("%d.[%d]\n", i, pilha[i]);
                    }
                }
                break;

            case 0:
                printf("Encerrando programa...\n");
                break;

            default:
                printf("Opcao invalida.\n");
                break;
        }

        system("pause"); // só no Windows
    } while(op != 0);

    return 0;
}