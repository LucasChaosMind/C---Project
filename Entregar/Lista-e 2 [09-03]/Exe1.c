/**1) Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo.
Esse programa deve calcular e mostrar:
a) A quantidade de convites que devem ser vendidos para cobrir o custo do espetáculo.
b) A quantidade de convites que devem ser vendidos para cobrir o custo do espetáculo e ainda obter um lucro
de 25%.**/
#include <stdio.h>
#include <math.h>
int main (){
    double esp, convite,aux;

    printf("Informe o Valor de Custo do Espetaculo: R$ ");
    scanf("%lf",&esp);
    printf("Informe o Valor do Convite: R$ ");
    scanf("%lf",&convite);

    aux= ceil(esp/convite);
    printf("Necessario Vender: %.lf",aux);
    printf("\nPara [25%% de lucro] necessario Vender: %.lf",aux* 1.25);

    return 0;
}
