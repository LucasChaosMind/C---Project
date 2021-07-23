/**2) Elabore um programa que leia via teclado uma quantidade de segundos (tipo int) e transforme este tempo
em dias, horas e minutos (as três últimas em tipo float).
**/
#include <stdio.h>

int main (){
    int time;

    printf("Informe o TEmpo em Segundos: ");
    scanf("%d",&time);

    printf("\nO Tempo em Minutos: %.1f",(float)time/60);
    printf("\nO Tempo em Horas: %.1f",(float)time/3600);
    printf("\nOtempo em Dias: %.1f",(float)time/86400);

    return 0;
}
