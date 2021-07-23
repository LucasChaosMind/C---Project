/** 2) Escreva um programa que leia um número e verifique se ele é maior, menor ou igual a 10.**/
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
