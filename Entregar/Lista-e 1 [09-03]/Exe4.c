/**4) Escreva um programa que leia dois valores que são o raio e a altura de um cilindro e calcule o seu volume,
cuja fórmula é: Volume = 3.1415 * Raio2
* Altura.
Faça o teste de mesa com as medidas a seguir:**/
#include <stdio.h>

int main (){
    double raio, altura;

    printf("Informe o Raio: ");
    scanf("%lf",&raio);
    printf("Informe a Altura: ");
    scanf("%lf",&altura);

    printf("Volume: %.lf",3.1415*(raio*raio)*altura);

    return 0;
}
