/***7) Imprimir os números de 100 a 0 (nessa ordem) utilizando a estrutura while. Calcular e mostrar a média aritmética dos números.**/
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
