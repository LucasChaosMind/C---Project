/**5) Ler um número inteiro com até 3 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.
Na sequência calcular e mostrar o inverso do número.
**/
#include <stdio.h>

int main (){

    int num,n1,n2,n3,aux;

    printf("Informe um Numero de Ate 3 Digitos: ");
    scanf("%d",&num);

    n1=num/100;
    n2=(num/10)%10;
    n3=num%10;
    aux=(n3*100)+(n2*10)+n1;

    printf("%d O Primeiro Digito",n1);
    printf("\n%d O Segundo Digito",n2);
    printf("\n%d O Terceiro Digito",n3);
    printf("\nO Inverso do Numero: %d",aux);

    return 0;
}
