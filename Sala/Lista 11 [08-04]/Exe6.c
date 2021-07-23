/**6) Ler caracteres e parar quando o usuário informar o caractere '0'. Utilizando a tabela ASCII contar quantos caracteres são letras
maiúsculas, quantos são letras minúsculas e quantos caracteres não são letras. Sugestão: utilizar o código numérico para comparar
(A equivale a 65, B a 66...).**/
#include <stdio.h>

int main(){

    int max=0, min=0;
    char var;

    do{
        printf("Informe Um Caracter: ");
        scanf(" %c",&var);

        if(var>=65&&var<=90){
            max++;
        }
        else if(var>=97&&var<=122){
            min++;
        }
    }while(var!='0');

    printf("\n\n%d Caracteres Sao Maiusculos!",max);
    printf("\n%d Caracteres Sao Minusculos!\n",min);

    return 0;
}
