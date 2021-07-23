/**3) Qual o objetivo do programa representado no código a seguir**/
#include <stdio.h>
int main(void)
{
    int num, i;
    do
    {
        printf("Informe um numero entre 1 e 50: ");
        scanf("%d", &num);
        if(num < 1 || num > 50)
        {
            printf("Valor informado fora da faixa.\n");
        }
    }
    while(num < 1 || num > 50);
    for(i=num; i<=50; i=i+2)
    {
        printf("\n%d\t", i);
    }
    return 0;
}
/** O progama verifica se o valor informa é mais que 1 e menor que 50
e em seguida um laço de repetição inicializando a varivel i com num enquanto i for menor ou igual a num
no fim o programa so exibe o num ja que o i é inicializado com num **/
