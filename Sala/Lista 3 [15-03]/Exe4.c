/**) Fazer um programa que leia um n�mero inteiro de at� tr�s d�gitos (considere que ser� fornecido um
n�mero de at� 3 d�gitos), calcule e imprima a soma dos seus d�gitos. **/
#include <stdio.h>

int main (){
    int num, n1,n2,n3;

    printf("Informe um Numero com ate 3 Digitos: ");
    scanf("%d",&num);

    n1=num/100;
    n2=(num/10)%10;
    n3=num%10;

    printf("%d == %d + %d + %d = %d",num,n1,n2,n3,n1+n2+n3);

    return 0;
}
