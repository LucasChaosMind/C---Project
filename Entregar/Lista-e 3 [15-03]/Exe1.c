/**1) Fazer um programa que leia um valor double que representa o sal�rio de uma pessoa. Apresente
separadamente os reais (parte inteira) e os centavos (parte decimal).
Observa��o: Apresentar os centavos como inteiro de dois d�gitos (exemplo: 40 em vez de 0.40)**/
#include <stdio.h>

int main (){
    double salario;

    printf("Informe o Valor do Salario: R$ ");
    scanf("%lf",&salario);

    printf("Salario Informado: R$ %.2lf",salario);
    printf("\nReais: %d",(int)salario);
    printf("\nCentavos: %.lf",(salario -(int)salario)*100);

    return 0;
}
