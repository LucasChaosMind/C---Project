/**7) Elaborar um programa que l� dois valores, verifica se o primeiro � m�ltiplo do segundo e escreve a
mensagem "S�o m�ltiplos" ou "N�o s�o m�ltiplos" dependendo da condi��o. Verificar para que n�o seja
realizada uma divis�o por zero. Nesse caso, informar que n�o � poss�vel realizar uma divis�o por zero.**/
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
