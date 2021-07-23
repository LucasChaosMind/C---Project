/**2) Fazer um programa para ler o salário de uma pessoa, o percentual de aumento e o percentual de
descontos. Os descontos incidem sobre o salário com aumento. Calcular o novo salário e mostrá-lo como no
exemplo a seguir.
**/
#include <stdio.h>

int main (){
    double salario,almento,desc,vtotal;

    printf("Informe o Valor do Salario: R$ ");
    scanf("%lf",&salario);
    printf("Informe o Percentual de Aulmento [10 -> 10%%]: ");
    scanf("%lf",&almento);
    printf("Informe o Percentual de Desconto[5 -> 5%%]: ");
    scanf("%lf",&desc);

    vtotal=salario*(100+almento)/100;
    printf("\nSalario Aumentado: %.2lf",vtotal);
    vtotal=vtotal*(100-desc)/100;
    printf("\nSalario Liquido: %.2lf",vtotal);
    printf("\n\nO Salario Liquido E: %.d Reais e %.lf",(int)vtotal,((vtotal-(int)vtotal)*100));

    return 0;
}
