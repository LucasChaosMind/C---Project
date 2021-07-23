 /**4) Faça um programa que receba o peso e a altura de uma pessoa e calcule o índice de massa corpórea.
Esse índice mede a relação entre peso e altura (peso em quilogramas dividido pelo quadrado da altura em
metros). Use a função pow() da biblioteca math.h para calcular a potência.
**/
#include <stdio.h>
#include <math.h>
int main(){

    double altura, peso;
    printf("Informe sua Altura: ");
    scanf("%lf",&altura);
    printf("Informe seu Peso: ");
    scanf("%lf",&peso);

    printf("IMC : %.2lf",(peso/pow(altura,2)));

    return 0;
}
