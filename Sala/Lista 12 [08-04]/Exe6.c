/**6) (Desafio) Implemente um algoritmo que l� n�meros informados pelo usu�rio. O algoritmo deve parar quando
informado um n�mero negativo. Para cada n�mero lido, exceto o n�mero negativo que representa a sa�da, o algoritmo
deve imprimir a quantidade de d�gitos do n�mero informado.
Observa��o: Desconsidere 0 como d�gito se o mesmo estiver no in�cio do n�mero.**/
#include <stdio.h>

int main (){

    int var;

    do{
        printf("Informe um Numero: ");
        scanf("%d",&var);

        if(var<10&&var>0){
            printf("\nO Numero tem 1 Digito!\n");
        }
        else if (var>=10&&var<100){
            printf("\nO Numero tem 2 Digitos!\n");
        }
        else if(var>=100&&var<1000){
            printf("\nOnumero tem 3 Digitos!\n");
        }
        else if(var>=1000&&var<10000){
            printf("\nO Numero tem 3 Digitos!\n");
        }
        else if(var<0){
            printf("\nFinal de Programa!\n");
        }
        else{
            printf("\nExeption In Time of Execution\n");
            var=-1;
        }
    }while(var>0);

    return 0;
}
