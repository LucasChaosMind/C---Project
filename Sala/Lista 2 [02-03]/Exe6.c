/**6) Fa�a um programa que leia o pre�o de uma mercadoria com diferen�a de um m�s (ler o valor da
mercadoria no m�s passado e no m�s atual) e calcule a taxa de infla��o mensal dessa mercadoria. A infla��o
� o percentual da diferen�a de pre�os (atual menos o anterior) sobre o pre�o anterior.**/
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
