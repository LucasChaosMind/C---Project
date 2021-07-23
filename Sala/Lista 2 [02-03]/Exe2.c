/**2) O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor
e a percentagem dos impostos (ambas aplicadas sobre o custo de fábrica). Escrever um programa para, a
partir do custo de fábrica do carro, calcular e mostrar o custo ao consumidor.
**/
#include <stdio.h>

int main (){
    float vtotal, autoM, imp, distro;

    printf("Informe o Valor do Automovel: ");
    scanf("%f",&autoM);
    printf("Informe o Percentual do Distribuidor: ");
    scanf("%f",&distro);
    printf("Informe o Percentuald e Imposto: ");
    scanf("%f",&imp);

    vtotal = autoM+ (autoM*((distro+imp)/100));
    printf("Valor total: %.2f",vtotal);

    return 0;
}
