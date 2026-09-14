#include <stdio.h>

int main(){
    float a, b, c;

    printf("Digite a medida de cada lado do triangulo:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a<b+c && b<a+c &&c<a+b){
        printf("Forma um triangulo = ");

            if (a==b && b == c){
                printf("Triangulo equilatero.\n");
            }else if(a==b || b==c || a==c){
                printf("Triangulo isosceles.\n");
            }else{
                printf("Triangulo escaleno\n");
            }
    }else{
        printf("Nao forma um triangulo\n");
    }

    return 0;
}