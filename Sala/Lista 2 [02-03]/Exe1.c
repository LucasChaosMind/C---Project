/**1) Ler dois números float e apresentar, sem utilizar funções matemáticas prontas:
a) A divisão do primeiro número pelo segundo, armazenando somente a parte inteira do número.
b) A soma dos dois números com o resultado arredondado para o próximo número inteiro.
Obs.: As variáveis de resultados devem ser do tipo int.**/
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
