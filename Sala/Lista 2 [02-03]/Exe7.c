/**7) Um viajante de carro far� o trajeto entre duas cidades e ao t�rmino da viagem deseja saber:
a) Quantas vezes foi necess�rio abastecer o carro. (Use a fun��o ceil() da biblioteca math.h para arredondar
o valor para cima)
b) Quantos litros foram consumidos para percorrer a dist�ncia indicada.
c) Quantos litros restaram no tanque ap�s a chegada ao destino.
Fa�a um programa que leia a dist�ncia entre as duas cidades, a capacidade do tanque e o consumo m�dio
do ve�culo, calcule e mostre as informa��es solicitadas.**/
#include <stdio.h>
#include <math.h>

int main (){

    float km,tanque,consumo,aux;

    printf("Informe a Distancia (Em Km) Entre as Cidades: ");
    scanf("%f",& km);
    printf("Informe a Capacidade do Tanque de Combustivel do Veiculo: ");
    scanf("%f",& tanque);
    printf("Informe o Consumo Medio (Km por Litro) do Veiculo: ");
    scanf("%f",& consumo);

    aux=km/consumo;
    printf("\nForam Necessarios %.2f Litros de Combustivel Para Percorer o Trajeto!",aux);
    aux=ceil(aux/tanque);
    printf("\nFoi Necessario Abastecer o Veiculo %.f Vezes",aux);
    aux=(tanque*aux)-(km/consumo);
    printf("\nRestou no Tanque de Combustivel %.2f",aux);

    return 0;
}
