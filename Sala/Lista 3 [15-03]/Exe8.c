/**8) Ler um número que representa a quantidade de dias. Informe os anos (considere-os com 360 dias), meses
(considere-os com 30 dias) e os dias contidos nesse valor.
**/
#include <stdio.h>

int main (){
    int tempo, ano,mes,dia;

    printf("Informe o Tempo em Dias: ");
    scanf("%d",&tempo);

    ano=tempo/365;
    mes=(tempo-(ano*365))/30;
    dia= tempo - (ano*365 + mes*30);

    printf("%d Dias Equivale a %d ano(s) %d mes(es). %d dia(s)!",tempo,ano,mes,dia);

    return 0;
}
