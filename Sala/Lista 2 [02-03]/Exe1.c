/**1) Ler dois n�meros float e apresentar, sem utilizar fun��es matem�ticas prontas:
a) A divis�o do primeiro n�mero pelo segundo, armazenando somente a parte inteira do n�mero.
b) A soma dos dois n�meros com o resultado arredondado para o pr�ximo n�mero inteiro.
Obs.: As vari�veis de resultados devem ser do tipo int.**/
#include <stdio.h>
#include <math.h>

int main (){

    float x , y;

    printf("Informe Um Valor Float X: ");
    scanf("%f",&x);
    printf("Informe Um Valor Float y: ");
    scanf("%f",&y);

    printf("\n%.2f / %.2f : %d",x,y,(int)(x/y));
    printf("\n%.2f + %.2f : %d",x,y,(int)ceil(x+y));
}
