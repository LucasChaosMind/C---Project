 /**4) Fa�a um programa que receba o peso e a altura de uma pessoa e calcule o �ndice de massa corp�rea.
Esse �ndice mede a rela��o entre peso e altura (peso em quilogramas dividido pelo quadrado da altura em
metros). Use a fun��o pow() da biblioteca math.h para calcular a pot�ncia.
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
