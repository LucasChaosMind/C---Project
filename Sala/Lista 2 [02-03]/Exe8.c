 /**8) Fa�a um programa que leia o sal�rio bruto mensal de um funcion�rio, calcule e mostre os valores conforme
o exemplo a seguir. Observa��o: � poss�vel fazer esse programa utilizando somente tr�s vari�veis: uma para
ler o sal�rio bruto, outra para os descontos e outra para o sal�rio l�quido.
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
