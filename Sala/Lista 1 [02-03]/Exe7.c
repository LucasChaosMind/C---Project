/**7) Faça um algoritmo que receba uma temperatura em grau Celsius, e calcule e mostre essa temperatura em
grau Fahrenheit. Sabe-se que F = (1.8 * C) + 32.**/

#include <stdio.h>

int main (){
    double vtotal, c;

    printf("Qual a temperatura aee (Ex: 10c): ");
    scanf("%lf",&c);

    vtotal = (1.8*c)+32;
    printf("Temperatura e unidade EUA: %.2lf",vtotal);
}
