/**7) O Tri�ngulo de Floyd � um tri�ngulo formado com n�meros naturais. O tri�ngulo come�a em 1 no canto
superior esquerdo e continua a escrever a sequ�ncia de n�meros naturais de tal modo que cada linha cont�m
um n�mero a mais do que a linha anterior. Escreva um programa que leia um n�mero inteiro positivo n e em
seguida imprima n linhas do Tri�ngulo de Floyd.**/
#include <stdio.h>

int main (){

   int var,cont,j;
   char c;

    do{
            cont=0;
            j=1;
        do{
            printf("Informe um Numero Positivo: ");
            scanf("%d",&var);
        }while(var<0);

        for(int i=1;i<=var;i++){
            while(cont<i){
                printf("%d ",j);
                cont++;
                j++;
            }
            printf("\n");
            cont=0;
        }

        printf("\n\nDeseja Continuar S-N? ");
        scanf(" %c",&c);
    }while(c=='S'||c=='s');

    return 0;
}
