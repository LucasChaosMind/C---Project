/**10) Resolva as seguintes express�es matem�ticas. X e Y s�o valores fornecidos pelo usu�rio. Calcule e
mostre o resultado de cada express�o. Reutilize vari�veis, ou seja, ter� apenas uma vari�vel para armazenar
os resultados do tipo int e outra para armazenar o resultado do tipo float. Faz a primeira opera��o e j�
imprime o resultado e assim para todas as demais opera��es. Aten��o para os resultados que podem ser
valores float e para a prioridade dos operadores. Primeiro deve-se linearizar as express�es e depois
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
