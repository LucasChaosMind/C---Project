/**6) (Desafio) Implemente um algoritmo que lê números informados pelo usuário. O algoritmo deve parar quando
informado um número negativo. Para cada número lido, exceto o número negativo que representa a saída, o algoritmo
deve imprimir a quantidade de dígitos do número informado.
Observação: Desconsidere 0 como dígito se o mesmo estiver no início do número.**/
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
