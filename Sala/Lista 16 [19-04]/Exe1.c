/**1) Elaborar um programa para ler valores inteiros (incluindo valores positivos e negativos) at� que o valor zero
seja informado. O valor zero n�o dever� ser considerado. O programa deve informar o maior e o menor entre
todos os valores lidos e apresentar a m�dia dos valores negativos informados. Obs.: Verificar para que n�o
sejam realizadas divis�es por zero.**/
#include <stdio.h>

int main (){

    int var,cont,min,max;
    char c;
    double media;

    do{
        min=0;
        max=0;
        cont=0;
        media=0;
        do{
            printf("Informe um Valor: ");
            scanf("%d",&var);

            if(var<0){
                    cont++;
                    media+=var;
                if(min>var){
                    min=var;
                }
            }
            if(max<var){
                max=var;
            }
        }while(var!=0);

         printf("\nO Maior Numero: %d",max);
         printf("\nO Menor Numero: %d",min);
         printf("\nA Media dos Negativos: %.2lf",(double)(media/cont));

        printf("\n\nDeseja Continuar S-N? ");
        scanf(" %c",&c);
    }while(c=='S'||c=='s');
}
