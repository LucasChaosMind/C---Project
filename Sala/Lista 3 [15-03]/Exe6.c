/**) Ler um número inteiro longo (long int) que representa os segundos e convertê-lo para horas, minutos e
segundos. Mostrar a quantidade de horas, minutos e segundos obtidos, no seguinte formato:
xhoras:yminutos:zsegundos**/
#include <stdio.h>

int main (){
    long int time;
    int hora, min, sec;

    printf("Informe o tempo em Sec: ");
    scanf("%li",&time);

    hora = time/3600;
    min=(time-(hora*3600))/60;
    sec= time -((hora*3600) + (min*60));
    printf("%d Hora. %d Minuto. %d Segundos",hora,min,sec);

    return 0;
}
