/**9) Escreva um programa que o leia o n�mero de horas trabalhadas por um funcion�rio, o valor por hora, o
n�mero de filhos com idade menor do que 14 anos, o valor do sal�rio fam�lia por filho e calcule e mostre o
sal�rio desse funcion�rio.**/
#include <stdio.h>

int main (){

    float horas,cash,filhos,family;
    //Meoo mo falta de adiministr�ao de memoria, doi colocar 4 variaveis

    printf("Informe o Numero de horas trabalhadas: R$ ");
    scanf("%f",&horas);
    printf("Informe o Valor da Hora trabalhada: R$ ");
    scanf("%f",&cash);
    printf("Informe Numero de Filhos: R$ ");
    scanf("%f",&filhos);
    printf("Informe o Valor do Salario Fmilia: R$ ");
    scanf("%f",&family);

    printf("Salario: R$ %.2f",(horas*cash)+(filhos*family));
}
