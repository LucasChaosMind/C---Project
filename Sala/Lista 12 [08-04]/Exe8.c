/***8) Um n�mero abundante � aquele cuja soma dos seus divisores (exclu�do o pr�prio n�mero) � maior do que ele
mesmo. Por exemplo, o n�mero 12 � abundante, pois se somarmos os seus divisores (1, 2, 3, 4 e 6) obteremos o valor
16 e este � maior do que o pr�prio n�mero. J� o n�mero 10 n�o � abundante, pois a somat�ria dos seus divisores (1, 2
e 5) � menor do que 10. Tamb�m o n�mero 6 n�o � abundante, pois a soma de seus divisores (1, 2 e 3) � igual a 6.
Escreva um programa que permita a leitura de um valor a partir do teclado e imprima uma mensagem informando se o
n�mero digitado � ou n�o abundante***/
#include <stdio.h>

int main (){

    int var, aux=0;

    do{
        printf("Informe um Numero: ");
        scanf("%d",&var);
        if(var<=0){
            printf("\nValor Invalido!");
        }
    }while(var<0);

    for(int i=1;i<var;i++){
        if(var%i==0){
            printf(" %d\n",i);
            aux+=i;
        }
    }
    printf("-----");
    printf("\n %d ",aux);
    if(aux>var){
        printf("\n\n%d E Abudante Porque a Soma dos Divisores e Maior que %d\n",var,var);
        return 0;
    }
    printf("\n\n%d Nao � Abudante Porque a Soma dos divisores e Menor que %d\n",var,var);
    return 0;
}
