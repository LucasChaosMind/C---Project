/**1) Ler um valor que representa o pre�o de um produto e imprimir esse valor com reajuste de x%. O percentual
do reajuste � informado pelo usu�rio.**/
#include <stdio.h>

int main (){

    double var, perct;

    printf("Informe o valor do Produto: R$ ");
    scanf("%lf",&var);
    printf("Informe o valor de Reajuste[0-100%]: ");
    scanf("%lf",&perct);

    printf("Valor Reajustado: R$ %.2lf",var+(var*perct)/100);

    return 0;
}
