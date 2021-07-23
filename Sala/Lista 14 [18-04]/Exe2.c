/**2) Escreva um programa que imprima todas as possibilidades de que no lançamento de dois dados a soma das
faces seja um valor informado pelo usuário. O usuário deve informar um valor válido entre 2 a 12. Repetir a
leitura até que o usuário informe um valor válido.**/

#include <stdio.h>

int main (){

    int var,i,j;
    char c;

    do{
         do{
            printf("Informe um Valor entre 2 a 12: ");
            scanf("%d",&var);
         }while(var<2&&var>12);
         j=var-1;
         for(i=1;i<var;i++){
             printf("%d + %d = %d\n",i,j,i+j);
             j--;
         }
         printf("\nNumero de Possibilidades: %d",i-1);

        printf("\n\nDeseja continuar S-N? ");
        scanf(" %c",&c);
    }while(c=='S'||c=='s');

    return 0;
}
