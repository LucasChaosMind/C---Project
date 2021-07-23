/**8) Faça um algoritmo que calcule e mostre a tabuada de 0 a 10 de um número inteiro digitado pelo usuário.
Exemplo:**/

#include <stdio.h>

int main (){

    int num;

    printf("Informe um numero: ");
    scanf("%d",&num);

    printf("%d * %d : %d\n",num,1,num*1);
    printf("%d * %d : %d\n",num,2,num*2);
    printf("%d * %d : %d\n",num,3,num*3);
    printf("%d * %d : %d\n",num,4,num*4);
    printf("%d * %d : %d\n",num,5,num*5);
    printf("%d * %d : %d\n",num,6,num*6);
    printf("%d * %d : %d\n",num,7,num*7);
    printf("%d * %d : %d\n",num,7,num*8);
    printf("%d * %d : %d\n",num,8,num*8);
    printf("%d * %d : %d\n",num,9,num*9);
    printf("%d * %d : %d\n",num,10,num*10);

    return 0;
}
