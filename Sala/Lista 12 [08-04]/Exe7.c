/**7) Implemente um algoritmo que l� n�meros informados pelo usu�rio. O algoritmo deve parar quando informado um
n�mero negativo. Para cada n�mero lido, exceto o n�mero negativo que representa a sa�da, o algoritmo dever� imprimir
a soma dos d�gitos.
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
