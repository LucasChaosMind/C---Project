/**9) Leia dois valores A e B e efetue a troca do conte�do das duas vari�veis lidas, de forma que a vari�vel A
passe a ter o valor de B e a vari�vel B o valor de A. Mostre o conte�do das vari�veis antes e depois da troca.
Exemplo:**/
#include <stdio.h>

int main (){
    int a , b , aux;

    printf("Informe o Numero de A: ");
    scanf("%d",&a);
    printf("Informe o Numero de B: ");
    scanf("%d",&b);

    aux=a;
    a=b;
    b=aux;
    printf("Valor de A: %d\nValor de B: %d",a,b);
}
