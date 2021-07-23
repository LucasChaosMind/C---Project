/**7) Suponha que um caixa disponha apenas de cédulas de R$ 100, R$ 10 e R$ 1. Escreva um programa para
ler o valor de uma compra e o valor fornecido pelo usuário para pagar essa compra, e calcule o troco.
Calcular e mostrar a quantidade de cada tipo de cédula que o caixa deve fornecer como troco. Mostrar
também o valor da compra e do troco. Use variáveis do tipo int.**/
#include <stdio.h>

int main (){
    int compra,money,troco,aux1,aux2,aux3;

    printf("Informe o Valor da Compra: R$ ");
    scanf("%d",&compra);
    printf("Informe o Valor Pago: R$ ");
    scanf("%d",&money);

    troco=money-compra;

    aux1 = troco/100;
    aux2=(troco-aux1*100)/10;
    aux3=troco-(aux1*100 + aux2*10);

    printf("O Troco de R$ %d Foi Pago Com: ",troco);
    printf("\n\n%d Notas de R$ 100",aux1);
    printf("\n%d Notas de R$ 10",aux2);
    printf("\n%d Notas de R$ 1",aux3);

    return 0;
}
