/**2) Faça um programa que apresente uma tabela de lucro esperado, em decorrência do número de pessoas e
valor do ingresso. O valor do ingresso vai de R$ 15,00 até R$ 20,00 aumentando de R$ 0,50 centavos. É
informada a quantidade de pessoas.**/
#include <stdio.h>

int main (){

    int var;

    printf("Informe a quantidade de Pessoas: ");
    scanf("%d",&var);


    printf("Valor do Ingresso      Valor Total Recebido\n");
    for(double i=15.0;i<=20.0;i=i+0.50){
        printf("%.2lf            %.2lf\n",i,i*var);
    }

    return 0;
}
