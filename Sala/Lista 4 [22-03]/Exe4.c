/**4) Escreva um programa que leia um número e verifique se ele se encontra no intervalo entre 5 e 20. Mostre
uma mensagem se o número estiver nesse intervalo**/
#include <stdio.h>

int main(){

    int num;

    printf("Informe um Numero: ");
    scanf("%d",&num);

    if(num>5&&num<20){
        printf("Esta Dentro de Intervalo de 5 a 20!\n");
    }
    else{
        printf("Nao Esta no Entre 5 e 20!\n");
    }

    return 0;
}
