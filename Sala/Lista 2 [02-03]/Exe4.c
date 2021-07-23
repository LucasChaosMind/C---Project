/**4) Escreva um programa que, dados a quantidade de litros de combustível utilizada, os quilômetros
percorridos por um automóvel e o valor do litro de combustível, calcule quantos quilômetros o veículo
percorreu por litro de combustível e o valor gasto em reais por km.
**/
#include <stdio.h>

int main (){
    float km,gasosa,money,total;

    printf("Informe Os Quilommetros Percoridos: ");
    scanf("%f",&km);
    printf("Informe o Combustivel Cnsumido: ");
    scanf("%f",&gasosa);
    printf("Informe o Preco do Combustivel: ");
    scanf("%f",&money);
    total=km/gasosa;
    printf("O Automovel fez : %.2f Km por Litro\n",total);
    printf("O Gasto em Reais por km foi: %.2f\n",money/total);
}
