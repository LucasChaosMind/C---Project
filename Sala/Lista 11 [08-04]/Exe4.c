/**4) Ler n�meros informados pelo usu�rio. Parar a leitura quando informado o n�mero zero, que n�o deve ser considerado. Fazer a
m�dia dos valores negativos informados. Dos valores positivos contar quantos s�o �mpares.**/
#include <stdio.h>

int main (){

    int var, neg=0,pos=0,aux=0;

    do{
        printf("Informe um Numero: ");
        scanf("%d",&var);

        if(var<0){
            aux+=var;
            neg++;
        }
        else{
            if(var%2!=0){
                pos++;
            }
        }
    }while(var!=0);

    printf("\n\nA Media dos Numeros Negativos: %.1lf",(double)aux/neg);
    printf("\nForam Informados %d Numeros Positivos que Sao Impares\n",pos);
}
