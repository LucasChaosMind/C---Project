/**4) Um professor atribui pesos de 1 a 3 para as notas de três avaliações, respectivamente. Faça um algoritmo
que receba as notas e calcule e mostre a média ponderada. A média e as notas serão valores do tipo float.**/
#include <stdio.h>

int main (){
    double  total, nota1=0, nota2=0, nota3=0;

    printf("Informe a Nota 1: ");
    scanf("%lf",&nota1);
    printf("Informe a Nota 2: ");
    scanf("%lf",&nota2);
    printf("informe a Nota 3: ");
    scanf("%lf",&nota3);

    total = ((nota1*1)+ (nota2*2)+ (nota3*3))/6;

    printf("Nota total: %.2lf",total);
}
