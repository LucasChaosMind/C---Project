/**2) Escreva um programa que imprima todas as possibilidades de que no lan�amento de dois dados a soma das
faces seja um valor informado pelo usu�rio. O usu�rio deve informar um valor v�lido entre 2 a 12. Repetir a
leitura at� que o usu�rio informe um valor v�lido.**/

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
