 /**3) Escreva um programa que calcule o valor da conversão para dólares de um valor lido em reais.
**/
#include <stdio.h>

int main (){

    float real, dolar;

    printf("Informe o Valor do Dolar: ");
    scanf("%f",&dolar);
    printf("Informe a valor em Reais: ");
    scanf("%f",&real);

    printf("%.2f Reais Equivalem ah : %.2f",real,real/dolar);
}
