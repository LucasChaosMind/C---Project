 /**1) Escreva um algoritmo que leia o comprimento (cm), a largura (cm) e a altura (cm) de uma caixa retangular
e calcule o seu volume (cm3
), cuja fórmula é:
Volume = Comprimento * Largura * Altura
**/
#include <stdio.h>

int main (){

    double vol=0, alt=0, comprimento=0 , larg=0;

    printf("Informe o Comprimento: ");
    scanf("%lf",&comprimento);
    printf("Informe a Largura: ");
    scanf("%lf",&larg);
    printf("Informe a Altura: ");
    scanf("%lf",&alt);

    vol = alt*comprimento*larg;

    printf("Volume : %.2lf",vol);

    return 0;

}
