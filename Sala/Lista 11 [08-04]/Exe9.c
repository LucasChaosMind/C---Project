/**9) Fazer um programa para o algoritmo representado no fluxograma a seguir.
Responda:
a) Que tipo de estrutura de repetição está representada neste fluxograma?
b) O que faz o programa implementado com base neste fluxograma?**/
#include <stdio.h>

int main (){

    int num=0;

    do{
        num++;
        printf("%d\t",num);
    }while(num<=100);

    return 0;
}
/**Estrutura do  while para contar ate 100 e imprimir os numeros**/
