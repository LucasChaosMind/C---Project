/**3) Cada degrau de uma escada tem uma altura X. Faça um programa para ler essa altura e a altura que o
usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para
atingir o seu objetivo.**/
#include <stdio.h>
#include <math.h>

int main (){

    double degraus,altura;

    printf("Informe Em Cm [Ex: 15 cm -> 0.15] o tamnho do Degral:  ");
    scanf("%lf",&degraus);
    printf("Informe Em Cm [Ex: 15 cm -> 0.15] Altura Desejada: ");
    scanf("%lf",&altura);

    printf("Sera Ncesario %.lf Degrais",ceil(altura/degraus));

    return 0;
}
