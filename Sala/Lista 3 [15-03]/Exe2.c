/**2) Considerando que para um cons�rcio sabe-se o n�mero total de presta��es, a quantidade de presta��es
pagas e o valor de cada presta��o (que � fixo). Escreva um programa que determine o valor total j� pago pelo
consorciado e o saldo devedor.
**/
#include <stdio.h>

int main (){

    double vmoney;
    int paga, total;

    printf("Informe a Quantidade Total de Prestacoes: ");
    scanf("%d",&total);
    printf("Informe a Quantidade de Prestacoes Pagas: ");
    scanf("%d",&paga);
    printf("Informe o Valor [Fixo] da prestacao: R$ ");
    scanf("%lf",&vmoney);

    printf("Valor Total Ja Pago: R$ %.2lf",paga*vmoney);
    printf("\nSaldo Devedor: %.2lf",(total-paga)*vmoney);

    return 0;
}
