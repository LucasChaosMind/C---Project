/** 3) Elaborar um programa que leia um caractere. Se o caractere informado for �F� ou �f� mostrar a mensagem
�pessoa f�sica�, se informado �J� ou �j� mostrar a mensagem �pessoa jur�dica� ou mostrar "caractere inv�lido"
para qualquer outro caractere.**/
#include <stdio.h>

int main (){

    char var;

    /**func��o gets tem falha de seguran�a ent�o vou usar o scanf**/
    printf("Informe J ou F: ");
    scanf(" %c",&var);

    if(var=='j'||var=='J'){
        printf("Pessoa Juridica!\n");
    }
    else if (var=='F'||var=='f'){
        printf("Pessoa Fsisica!\n");
    }
    else{
        printf("Valor invalido!\n");
    }
    return 0;
}
