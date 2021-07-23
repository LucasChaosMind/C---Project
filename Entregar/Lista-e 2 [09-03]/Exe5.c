/**5) Um hotel deseja fazer uma promoção especial de final de semana, concedendo um desconto de 25% na
diária. Sendo informados o número de apartamentos do hotel e o valor da diária por apartamento para o final
de semana completo. Elaborar um programa para calcular:
a) Valor promocional da diária;
b) Valor total caso a ocupação no final de semana atinja 100%;
c) Valor total a ser arrecadado caso a ocupação no final de semana atinja 70%;
d) Valor que o hotel deixará de arrecadar em virtude da promoção, caso a ocupação atinja 100%.
Armazene em variáveis apenas o valor da diária, o valor da diária com desconto e a quantidade de quartos.
**/
#include <stdio.h>

int main (){

    double diaria, apt, aux;

    printf("Informe o Valor da Diaria: ");
    scanf("%lf",&diaria);
    printf("Informe a Quantidade de Apartamentos: ");
    scanf("%lf",&apt);

    aux=diaria*apt;
    printf("\nO Total Arecadado com 100%% de Ocupacao: R$ %.2lf",aux);
    printf("\nO Total Arrecadado com 70%% de ocupação: R$ %.2lf",aux*0.7);
    aux=diaria*0.75;
    printf("\nO Valor da Diaria Promocional: R$ %.2lf",aux);
    printf("\nO Valor Arrecadado de Diaria Promocional: R$ %.2lf",aux*apt);

    return 0;
}
