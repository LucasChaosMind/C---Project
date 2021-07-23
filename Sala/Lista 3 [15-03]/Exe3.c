/**3) Leia um valor double que representa o troco a ser fornecido por um caixa. Separe a parte inteira (reais) da
parte decimal (centavos) e apresente na forma: 123 reais e 18 centavos.**/
#include <stdio.h>

int main (){

    double num;

    printf("Informe o Valor do Troco: R$ ");
    scanf("%lf",&num);

    printf("O Valor Informado e %d Reais e %d Centavos",(int)num,(int)((num-(int)num)*100));

    return 0;
}
