/**7) Implemente um algoritmo que lê números informados pelo usuário. O algoritmo deve parar quando informado um
número negativo. Para cada número lido, exceto o número negativo que representa a saída, o algoritmo deverá imprimir
a soma dos dígitos.
**/
#include <stdio.h>

int main (){

    int var, aux;

    do{
        printf("Informe um numero: ");
        scanf("%d",&var);

        if(var>=10&&var<100){
            aux= (var/10)+(var%10);
            printf("\nA soma dos Digitos: %d\n",aux);
        }
        else if (var>=100&&var<1000){
            aux= (var/100)+((var/10)%10)+(var%10);
            printf("\nA Soma dos Digitos: %d\n",aux);
        }
        else{
            printf("\nFim de Programa!");
            var=-1;
        }
    }while(var>0);

    return 0;
}
