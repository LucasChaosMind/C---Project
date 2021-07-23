/**5) Escreva um programa para ler o número de votos brancos, nulos (incluem eleitores ausentes) e válidos de
uma eleição. Calcular e mostrar o percentual que cada um (brancos, nulos e válidos) representa em relação
ao total de eleitores. Lembrar que os valores dos percentuais podem não ser inteiros.**/
#include <stdio.h>

int main (){
    float validos,nulos,branco,vtotal;

    printf("Informe os Votos Validos: ");
    scanf("%f",&validos);
    printf("Informe os Votos Brancos: ");
    scanf("%f",&branco);
    printf("Informe os Votos Nulos: ");
    scanf("%f",&nulos);

    vtotal = validos+nulos+branco;

    //SCRUM ATÉ NA ALMAAAAA
    printf("\nNumero dos Validos: %.1f%%",(validos*100)/vtotal);
    printf("\nNumero de votos Brancos: %.1f%%",(branco*100)/vtotal);
    printf("\nNumero de Votos Nulos: %.1f%%",(nulos*100)/vtotal);


}
