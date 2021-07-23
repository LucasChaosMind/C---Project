/**9) Leia dois valores A e B e efetue a troca do conteúdo das duas variáveis lidas, de forma que a variável A
passe a ter o valor de B e a variável B o valor de A. Mostre o conteúdo das variáveis antes e depois da troca.
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
