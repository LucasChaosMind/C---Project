/**2) Ler a quantidade de kilowatts de energia el�trica consumidos por uma resid�ncia. Calcular e mostrar o
valor em reais de cada kilowatts, o valor total a ser pago e valor a ser pago por essa resid�ncia quando h�
desconto de 10%. Considere que 100 kilowatts custam 1/7 do sal�rio m�nimo. Ler o valor do sal�rio m�nimo.
Armazene em vari�veis apenas o valor do sal�rio m�nimo, a quantidade de kilowatts gastos pela resid�ncia e
o valor de um kilowatt.
**/
#include <stdio.h>

int main(){

    //SCRUM sim ele mesmo o proprio
    double salario,vmoney;

    printf("Informe o Valor do Salario Minimo: R$ ");
    scanf("%lf",&salario);
    printf("Informe a Quantidade de Quliwatts Gastos: ");
    scanf("%lf",&vmoney);
    vmoney= (vmoney/100)*(salario/7);
    printf("\nO valor do Quilowatt e: R$ %.2lf",salario/100/7);
    printf("\nValor a ser Pago: R$ %.2lf",vmoney);
    printf("\nValor com 10%: R$ %.2lf",(vmoney*0.9));

    return 0;
}
