#include <stdio.h>
#include <math.h>
#define TAM 5

// calculadora de baskhara

float delta(float a, float b, float c){
        return (b*b)-(4*a*c); 
}

float x1(float a, float b, float delta){
        return (-b+sqrt(delta))/(2*a);
}

float x2(float a, float b, float delta){
        return (-b-sqrt(delta))/(2*a);
}

void calc_sqrt(float a, float b, float c, float *r1, float *r2){
        float d = delta(a, b, c);
        if(d<0){
                printf("impossivel calcular raiz real.\n");
                *r1 = *r2 = 0;
        } else{
                *r1 = (-b+sqrt(d))/(2*a);
                *r2 = (-b-sqrt(d))/(2*a);
        }
}

void menu_baskhara(){
        float a, b, c, d, r1, r2;
        printf("\n.calculadora de baskhara\n");
        printf("digite os valores de a, b e c:\n");
        scanf("%f %f %f", &a, &b, &c);

        d=delta(a, b, c);
        printf("Delta = %.2f\n", d);

        if(d>=0){
                printf("x1 = %.2f\n", x1(a, b, d));
                printf("x2 = %.2f\n", x2(a, b, d));
                calc_sqrt(a, b, c, &r1, &r2);
                printf("raizes por referencia: x1 = %.2f, x2 = %.2f\n", r1, r2);
        } else{
                printf("impossivel calcular raizes reais.\n");
        }
}

// empilhadeira

int pilha[TAM];
int top = -1;

void push(int val){
        if(top==TAM-1){
                printf("pilha cheia.\n");
        }else{
                top++;
                pilha[top]=val;
                printf("valor %d empilhado.\n", val);
        }
}

void pop(){
        if(top==-1){
                printf("pilha vazia.\n");
        }else{
                printf("valor removido: %d\n", pilha[top]);
                top--;
                }
        }

void print(){
        if(top==-1){
                printf("pilha vazia.\n");
        }else{
                printf("elementos da pilha:\n");
                for(int i=top; i>=0; i--){
                        printf("%d\n", pilha[i]);
                }
        }
}

void menu_pilha(){
        int op, val;
        do{
                printf(".empilhadeira\n");
                printf("1.push\n");
                printf("2.pop\n");
                printf("3.imprimir pilha\n");
                printf("0.voltar\n");
                printf("escolha: ");
                scanf("%d", &op);

                switch(op){
                        case 1:
                                printf("digite o valor: ");
                                scanf("%d", &val);
                                push(val);
                                break;
                        case 2:
                                pop();
                                break;
                        case 3:
                                print();
                                break;
                        case 0:
                                printf("voltando ao menu principal...\n");
                                break;
                        default:
                                printf("opcao invalida.\n");
                }
        }while(op!=0);
}

// main

int main(){
        int opt;

        do{
                printf("\n.menu\n");
                printf("1.calculadora de baskhara\n");
                printf("2.empilhadeira\n");
                printf("0.sair\n");
                printf("opcao: ");
                scanf("%d", &opt);

                switch(opt){
                        case 1:
                                menu_baskhara();
                                break;
                        case 2:
                                menu_pilha();
                                break;
                        case 0:
                                printf("Encerrando o programa...\n");
                        default:
                                printf("opcao invalida.");
                }
        } while(opt!=0);

        return 0;
}