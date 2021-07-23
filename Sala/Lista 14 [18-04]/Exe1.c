/**1) Um determinado material radioativo perde metade de sua massa a cada 60 segundos. Dada a massa inicial,
em gramas, fazer um programa que determine o tempo necessário para que essa massa se torne menor que
0,5 gramas. A massa inicial informada pelo usuário tem que ser maior que zero. Validar essa entrada, isto é,
ficar repetindo a leitura da massa inicial até que o usuário informe um valor válido (maior que zero). O programa
deverá mostrar a massa final e o tempo calculado em minutos.
**/
#include <stdio.h>

int main (){

    double var;
    char c;

    do{
        int i;

        do{
            printf("Informe o Valor da Massa Inicial: ");
            scanf("%lf",&var);
        }while(var<0);

        for(i=0;var>=0.5;i++){
            var/=2;
        }
        printf("\nMassa Final: %.2lf",var);
        printf("\nSerao Necessarios %d Minuto(s) para Atingir a Massa Final!",i);

        printf("\n\nDeseja continuar S-N? ");
        scanf(" %c",&c);
    }while(c=='S'||c=='s');

    return 0;
}
