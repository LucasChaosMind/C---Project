/** 2) Escreva um programa que leia um n�mero e verifique se ele � maior, menor ou igual a 10.**/
#include <stdio.h>

int main(){
    int num;

    printf("Informe um Numero: ");
    scanf("%d",&num);

    if(num==10){
        printf("Numero Igual a 10!\n");
    }
    else if(num>10){
        printf("Numero Maior que 10!\n");
    }
    else{
        printf("Numero Menor que 10!\n");
    }
    return 0;
}
