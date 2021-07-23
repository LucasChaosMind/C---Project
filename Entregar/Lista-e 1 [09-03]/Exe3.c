/**) Uma revendedora de carros usados paga aos seus funcionários vendedores um salário fixo por mês, mais
uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por eles efetuadas.
Escrever um programa que receba os seguintes dados de um vendedor:
**/
#include <stdio.h>

int main (){

    double vmoney,comisao,car,vtotal;

    printf("Informe o Valor Total do Salario fixo: R$ ");
    scanf("%lf",&vmoney);
    printf("Informe Comisão por Carro Vendido: R$ ");
    scanf("%lf",&comisao);
    printf("Informe o Numero de Carros vendidos: ");
    scanf("%lf",&car);
    printf("Informe o Valor Total de Vendas: R$ ");
    scanf("%lf",&vtotal);

    printf("O Salario Liquido: R$ %.2lf",vmoney+(comisao*car)+vtotal*0.05);

    return 0;
}
