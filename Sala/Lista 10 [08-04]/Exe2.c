/**2) Fa�a um programa que apresente uma tabela de lucro esperado, em decorr�ncia do n�mero de pessoas e
valor do ingresso. O valor do ingresso vai de R$ 15,00 at� R$ 20,00 aumentando de R$ 0,50 centavos. �
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
