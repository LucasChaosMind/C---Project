/**9) Elaborar um programa que leia um n�mero que representa a quantidade de valores �mpares e m�ltiplos de 5 que o
usu�rio que ver. Se o usu�rio informar um valor negativo transform�-lo em positivo sem usar a fun��o fabs(). Fazer a
m�dia dos valores m�ltiplos de 3 desse intervalo.
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
