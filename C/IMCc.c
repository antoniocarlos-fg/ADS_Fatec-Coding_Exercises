#include <stdio.h>
#include <math.h>

int main(){
    int N=0, opt=1;
    float P, A, IMC, maiorP=0, menorP=0, maiorA=0, menorA=0, maiorIMC=0, menorIMC=0, medIMC, medP, medA;
    float sumP=0, sumA=0, sumIMC=0;

    printf("    Calculadora de IMCs\n\n");

    while(opt==1){
        N++;

        printf("%da pessoa\nPeso(Kg): ", N);
        scanf("%f", &P);
        printf("Altura(m): ");
        scanf("%f", &A);

        IMC = P/pow(A, 2);
        printf("\nIMC: %.2f\n\n", IMC);

        sumP += P;
        sumA += A;
        sumIMC += IMC;

        if(P>maiorP){
            maiorP = P;
        }
        if(A>maiorA){
            maiorA = A;
        }
        if(IMC>maiorIMC){
            maiorIMC = IMC;
        }
        if(menorP==0){ menorP = P;
        }else if(menorP>P){
            menorP = P;
        }if(menorA==0){
            menorA = A;
        }else if(menorA>A){
            menorA = A;
        }if(menorIMC==0){
            menorIMC = IMC;
        }else if(menorIMC>IMC){
            menorIMC = IMC;
        }
         
        printf("Deseja finalizar e receber as medias ou continuar inserindo dados? Digite:\n1 para continuar     0 para finalizar\n");
        scanf("%d", &opt);
        while(opt!=0 && opt!=1){
            printf("Invalido. Digite:\n1 para continuar     0 para finalizar\n");
            scanf("%d", &opt);
        }
    }

    medP = sumP/N;
    medA = sumA/N;
    medIMC = sumIMC/N;

    printf("\nMaior Peso: %.2fKg.\nMenor Peso: %.2fKg.\nMedia: %.2fKg.", maiorP, menorP, medP);
    printf("\nMaior Altura: %.2fm\nMenor Altura: %.2fm\nMedia: %.2fm", maiorA, menorA, medA);
    printf("\nMaior IMC: %.2f\nMenor IMC: %.2f\nMedia: %.2f", maiorIMC, menorIMC, medIMC);

    return 0;
}