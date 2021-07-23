/**9) Criar um programa que leia o peso (em kg) de uma pessoa e calcule e imprima:
a) O peso da pessoa em gramas.
b) O novo peso, em gramas, se a pessoa engordar 12%.**/
#include <stdio.h>

int main (){
    double kg,gramas;

    printf("Informe o Seu peso em Gramas: ");
    scanf("%lf",&kg);
    gramas=kg*10000;
    printf("\nPeso em Gramas: %.1lf",gramas);
    printf("\nPeso em Gramas se Engardor 12%%: %.1lf",(gramas*112)/100);
    printf("\nPeso em Liloramas se Engordar 12%%: %.1lf",(kg*112)/100);

    return 0;
}
