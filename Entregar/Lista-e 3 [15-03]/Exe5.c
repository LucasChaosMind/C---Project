/**5) Ler um n�mero inteiro com at� 3 d�gitos. Separar os d�gitos desse n�mero e mostr�-los em linhas distintas.
Na sequ�ncia calcular e mostrar o inverso do n�mero.
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
