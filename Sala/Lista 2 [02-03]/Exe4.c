/**4) Escreva um programa que, dados a quantidade de litros de combust�vel utilizada, os quil�metros
percorridos por um autom�vel e o valor do litro de combust�vel, calcule quantos quil�metros o ve�culo
percorreu por litro de combust�vel e o valor gasto em reais por km.
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
