/**10) Resolva as seguintes expressões matemáticas. X e Y são valores fornecidos pelo usuário. Calcule e
mostre o resultado de cada expressão. Reutilize variáveis, ou seja, terá apenas uma variável para armazenar
os resultados do tipo int e outra para armazenar o resultado do tipo float. Faz a primeira operação e já
imprime o resultado e assim para todas as demais operações. Atenção para os resultados que podem ser
valores float e para a prioridade dos operadores. Primeiro deve-se linearizar as expressões e depois
implementar o algoritmo para calcular os resultados.
**/
#include <stdio.h>

int main (){
    double vtotal,x,y;
    int aux;

    printf("Informe X: ");
    scanf("%lf",&x);
    printf("Informe Y: ");
    scanf("%lf",&y);

    vtotal = ((x+y)/y)*(x*x);
    printf("\nRestudado A: %.2lf",vtotal);
    vtotal = (x+y)/(x-y);
    printf("\nRestudado B: %.2lf",vtotal);
    vtotal= ((x*x)+ (y*y*y))/2;
    printf("\nRestudado C: %.2lf",vtotal);
    vtotal= (x*x*x)/(x*x);
    printf("\nRestudado D: %.2lf",vtotal);

    aux = (int)x%(int)y;
    printf("\nResto da divisao de x por y : %d",aux);
    aux = (int)x %3;
    printf("\nResto da divisao de x por 3 : %d",aux);
    aux= (int)y%5;
    printf("\nResto da divisao de y por 5 : %d",aux);

    return 0;
}
