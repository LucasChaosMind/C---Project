/***8) Um número abundante é aquele cuja soma dos seus divisores (excluído o próprio número) é maior do que ele
mesmo. Por exemplo, o número 12 é abundante, pois se somarmos os seus divisores (1, 2, 3, 4 e 6) obteremos o valor
16 e este é maior do que o próprio número. Já o número 10 não é abundante, pois a somatória dos seus divisores (1, 2
e 5) é menor do que 10. Também o número 6 não é abundante, pois a soma de seus divisores (1, 2 e 3) é igual a 6.
Escreva um programa que permita a leitura de um valor a partir do teclado e imprima uma mensagem informando se o
número digitado é ou não abundante***/
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
    printf("\n\n%d Nao é Abudante Porque a Soma dos divisores e Menor que %d\n",var,var);
    return 0;
}
