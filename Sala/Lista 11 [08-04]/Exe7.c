/***7) Imprimir os n�meros de 100 a 0 (nessa ordem) utilizando a estrutura while. Calcular e mostrar a m�dia aritm�tica dos n�meros.**/
#include <stdio.h>

int main (){
    int i=100, var=0;

    while(i>0){
        printf("%d\t",i);
        var+=i;
        i--;
        if(i%10==0){
            printf("\n");
        }
    }
    printf("\nMedia: %.2lf",(double)var/100);
}
