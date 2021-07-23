/** 2) Escreva um algoritmo que leia o raio de um círculo e calcule a sua circunferência (C = 2. π. r).**/
#include <stdio.h>

int main (){
    double total=0, raio=0;

    printf("Informe o tamamnho do Raio: ");
    scanf("%lf",&raio);

    total = 2 * 3.14 * raio;

    printf("Circunferencia: %.2lf",total);
}
