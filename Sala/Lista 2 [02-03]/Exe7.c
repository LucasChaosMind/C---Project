/**7) Um viajante de carro fará o trajeto entre duas cidades e ao término da viagem deseja saber:
a) Quantas vezes foi necessário abastecer o carro. (Use a função ceil() da biblioteca math.h para arredondar
o valor para cima)
b) Quantos litros foram consumidos para percorrer a distância indicada.
c) Quantos litros restaram no tanque após a chegada ao destino.
Faça um programa que leia a distância entre as duas cidades, a capacidade do tanque e o consumo médio
do veículo, calcule e mostre as informações solicitadas.**/
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
