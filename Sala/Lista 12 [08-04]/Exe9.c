/**9) Elaborar um programa que leia um número que representa a quantidade de valores ímpares e múltiplos de 5 que o
usuário que ver. Se o usuário informar um valor negativo transformá-lo em positivo sem usar a função fabs(). Fazer a
média dos valores múltiplos de 3 desse intervalo.
Exemplo**/
#include <stdio.h>

int main (){

        int var, aux=0, cont=0;

    printf("Quantos Numeros Impares e Multiplos de 5 QUer Mostrar: ");
    scanf("%d",&var);

    if(var<0){
        var=var*-1;
    }

    for(int i=var;cont<var;i+=2){
        if(i%var==0){
            printf("\n %d",i);
            aux+=i;
            cont++;
        }
    }
    printf("\nA Media dos Numeros Multiplos de 5: %.2lf",(double)aux/cont);

    return 0;
}
