#include <stdio.h>
#define TAM 5

int main() {
    int lista[TAM];
    int tamanho = 0;
    int op;

    do {
        printf("\n=== lista estatoca ===\n");
        printf("1. insere elemento\n");
        printf("2. remove elemento\n");
        printf("3. imprime a lista\n");
        printf("0. sair\n");
        printf("opcao: ");
        scanf("%d", &op);

        switch(op) {
            case 1: {
                if (tamanho == TAM) {
                    printf("\nlista cheia. nao e possivel inserir.\n");
                } else {
                    int pos, valor;
                    printf("informe a posicao (0 a %d): ", tamanho);
                    scanf("%d", &pos);

                    if (pos < 0 || pos > tamanho) {
                        printf("posicao invalida.\n");
                    } else {
                        printf("informe o valor: ");
                        scanf("%d", &valor);

                        for (int i = tamanho; i > pos; i--) {
                            lista[i] = lista[i - 1];
                        }

                        lista[pos] = valor;
                        tamanho++;
                        printf("valor inserido com sucesso.\n");
                    }
                }
                break;
            }

            case 2: {
                if (tamanho == 0) {
                    printf("\nlista vazia. nao ha o que remover.\n");
                } else {
                    int pos;
                    printf("informe a posicao para remover (0 a %d): ", tamanho - 1);
                    scanf("%d", &pos);

                    if (pos < 0 || pos >= tamanho) {
                        printf("posicao invalida.\n");
                    } else {
                        for (int i = pos; i < tamanho - 1; i++) {
                            lista[i] = lista[i + 1];
                        }
                        tamanho--;
                        printf("elemento removido.\n");
                    }
                }
                break;
            }

            case 3: {
                if (tamanho == 0) {
                    printf("\nlista vazia.\n");
                } else {
                    printf("\nelementos da lista: ");
                    for (int i = 0; i < tamanho; i++) {
                        printf("%d ", lista[i]);
                    }
                    printf("\n");
                }
                break;
            }

            case 0:
                printf("\nencerrando o programa...\n");
                break;

            default:
                printf("opcao invalida.\n");
        }

    } while (op != 0);

    return 0;
}