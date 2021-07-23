/**3) Ler números informados pelo usuário. Parar a leitura quando informado um número negativo ou 0. Esse número não deve ser
considerado na contagem. Contar e mostrar quantos números divisíveis por 5 e pares foram informados.**/
#include <stdio.h>

int main(){

    int var,aux=0,par=0,cinco=0;

    printf("Informe o Valor -1 para Sair do Progama!");

    do{
        printf("\nInforme um Numero: ");
        scanf("%d",&var);
        if(var>0){
            if(var%5==0){
                cinco++;
            }
            if(var%2==0){
                par++;
            }
        aux+=var;
        }
    }while(var!=-1);

    printf("\nSoma Total: %d",aux);
    printf("\n\n%d Valores Divisiveis por 5!",cinco);
    printf("\n\%d Valores Pares!",par);
    return 0;
}
