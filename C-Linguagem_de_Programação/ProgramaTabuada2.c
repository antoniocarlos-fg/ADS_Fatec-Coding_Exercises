#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    
    printf("\tTabuador 3000\nEscolha um numero para ver a tabuada: ");
    scanf("%d", &num);

    printf("%dx%d=%d\n",1,num,1*num);
    printf("%dx%d=%d\n",2,num,2*num);
    printf("%dx%d=%d\n",3,num,3*num);
    printf("%dx%d=%d\n",4,num,4*num);
    printf("%dx%d=%d\n",5,num,5*num);
    printf("%dx%d=%d\n",6,num,6*num);
    printf("%dx%d=%d\n",7,num,7*num);
    printf("%dx%d=%d\n",8,num,8*num);
    printf("%dx%d=%d\n",9,num,9*num);
    printf("%dx%d=%d\n\n",10,num,10*num);

    return 0;
}