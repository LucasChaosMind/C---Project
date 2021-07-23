/** 3) Elaborar um programa que leia um caractere. Se o caractere informado for ‘F’ ou ‘f’ mostrar a mensagem
“pessoa física”, se informado ‘J’ ou ‘j’ mostrar a mensagem “pessoa jurídica” ou mostrar "caractere inválido"
para qualquer outro caractere.**/
#include <stdio.h>

int main (){

    char var;

    /**funcção gets tem falha de segurança então vou usar o scanf**/
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
