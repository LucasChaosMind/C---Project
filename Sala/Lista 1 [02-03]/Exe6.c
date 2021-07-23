/**6) Calcular o valor do salário líquido de uma pessoa. Sobre o salário bruto incidem descontos de imposto de
renda e de INSS.**/
#include <stdio.h>

int main (){

    double salario,vtotal,inss, ir;

    printf("Informe Seu Salario: ");
    scanf("%lf",&salario);
    printf("Informe o perecentual do INSS: ");
    scanf("%lf",&inss);
    printf("Informe o percentual de IR: ");
    scanf("%lf",&ir);

    vtotal= salario - (salario*((inss + ir)/100));

    printf("Salario liquido (>_<) : %.2lf",vtotal);
}
