/**7) Elaborar um programa que lê dois valores, verifica se o primeiro é múltiplo do segundo e escreve a
mensagem "São múltiplos" ou "Não são múltiplos" dependendo da condição. Verificar para que não seja
realizada uma divisão por zero. Nesse caso, informar que não é possível realizar uma divisão por zero.**/
#include <stdio.h>

int main (){
    int var1,var2;

    printf("Informe Um Numero: ");
    scanf("%d",&var1);
    printf("Informe Um Numero: ");
    scanf("%d",&var2);

    if(var1%var2==0){
        printf("Multiplo!");
    }
    else{
        printf("Nao Eh Multiplo!");
    }

    return 0;
}
