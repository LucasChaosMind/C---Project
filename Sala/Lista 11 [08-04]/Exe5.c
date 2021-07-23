/**5) Ler caracteres informados pelo usuário. Parar a leitura quando o usuário informar o caractere '0'. Contar quantas vezes foi
informado o caractere 'A'.**/
#include <stdio.h>

int main (){

    int cont=0;
    char var;

    do{
        printf("Informe Uma Letra: ");
        scanf(" %c",&var);
        if(var=='A'){
            cont++;
        }
    }while(var!='0');

    printf("\nA Letra 'A' Foi Informada : %d Vezes",cont);

    return 0;
}
