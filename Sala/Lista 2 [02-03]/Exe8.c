 /**8) Faça um programa que leia o salário bruto mensal de um funcionário, calcule e mostre os valores conforme
o exemplo a seguir. Observação: É possível fazer esse programa utilizando somente três variáveis: uma para
ler o salário bruto, outra para os descontos e outra para o salário líquido.
**/
#include <stdio.h>

int main (){
    float brutus , vtotal, aux;

    printf("Salario Bruto: R$ ");
    scanf("%f",&brutus);

    aux=(brutus*0.15);
    aux+=(brutus*0.11);
    aux+=(brutus*0.03);

    printf("\n(-)IR (15%%): R$ %.2f",brutus*0.15);
    printf("\n(-)INSS (11%%): R$ %.2f",brutus*0.11);
    printf("\n(-)Sindicato (3%%): R$ %.2f",brutus*0.03);
    printf("\nSalario Total: R$ %.2f",brutus-aux);

    return 0;
}
