/**6) Faça um programa que leia o preço de uma mercadoria com diferença de um mês (ler o valor da
mercadoria no mês passado e no mês atual) e calcule a taxa de inflação mensal dessa mercadoria. A inflação
é o percentual da diferença de preços (atual menos o anterior) sobre o preço anterior.**/
#include <stdio.h>

int main (){

    float vtotal, atual, past;

    printf("Informe o Preco de Uma no Mes Passado: ");
    scanf("%f",&past);
    printf("Informe o Preco de Uma no Mes Atual: ");
    scanf("%f",&atual);

    vtotal = ((atual-past)*100)/past;
    printf("Inflacao :> %.2f%%",vtotal);

    return 0;
}
