/**2) Considerando que para um consórcio sabe-se o número total de prestações, a quantidade de prestações
pagas e o valor de cada prestação (que é fixo). Escreva um programa que determine o valor total já pago pelo
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
