/**3) Escreva um algoritmo que leia o valor de uma presta��o e da taxa de juros cobrada pelo atraso da
presta��o. Calcule o valor a ser pago por meio da f�rmula:
Valor com juros = Presta��o + (Presta��o * Taxa /100)**/
#include <stdio.h>

int main (){

    double vtotal=0, prestacao=0, taxa=0;

    printf("Informe a Prestacao: ");
    scanf("%lf",&prestacao);
    printf("Informe a Taxa: ");
    scanf("%lf",&taxa);

    vtotal = prestacao + (prestacao * taxa/100);

    printf("Valor com juros: %.2lf",vtotal);
}
