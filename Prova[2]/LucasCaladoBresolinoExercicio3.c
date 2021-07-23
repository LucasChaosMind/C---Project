/***Quest�o 3 (3,4 pontos) - Fazer um programa que leia uma string e, em uma nova string, copie e substitua cada vogal lida por n vogais iguais,
onde n representa o n�mero de vogais lidas at� ent�o. Para os demais caracteres, o programa deve apenas copiar o pr�prio caractere.
Inicialmente, devem ser transformados todos os caracteres da string em letras min�sculas (deve ser implementada uma fun��o para isso) e
devem ser retirados os espa�os no in�cio e no final e ser deixado apenas 1 espa�o entre as palavras (deve ser implementada uma fun��o para
gerenciar os espa�os). Tamb�m deve ser calculado e mostrado o percentual de consoantes em rela��o ao total de caracteres digitados.
Exemplo (os tra�os representam os espa�os): -----Eu--gosto---DE----ProgramaR--**/
#include <stdio.h>
#include <stdlib.h>

void lerString(char var[]){
   int i=0;

    while(var[i]!='\0'){
        printf("%c",var[i]);
        i++;
    }
}
void strMinuscula (char var[]){
    int i=0;
    while(var[i]!='\0'){
        if(var[i]>='A'&&var[i]<='Z'){
            var[i] = var[i] + (char)32;
        }
        i++;
    }
}
void semEspaco(char var[]){
    int i=0,j;
    char aux;
    while(var[i]!='\0'){

        if(var[i]==' '){

            if(var[i+1]==' '){
             j=i;

                while(var[j]!='\0'){
                    var[j]=var[j+1];
                    j++;
                }

            }
            if(var[i-1]==' '){
                    j=i-1;
                while(var[j]!='\0'){
                    var[j]=var[j+1];
                    j++;
                }
            }
        }
    i++;
    }
}
double contaVogal(char var[]){
    double cont=0;
    int aux,i;

    while(var[i]!='\0'){
        if(var[i]=='a'||var[i]=='e'||var[i]=='i'||var[i]=='o'||var[i]=='u'){
            cont++;
        }
    }
    return cont;
}
int contaString(char var[]){
    int i=0,cont=0;
    while (var[i]!='\0'){
        i++;
        cont++;
    }
    return cont;
}
int main(){

    char c,var[25];

    do{
        printf("Informe um texto: ");
        scanf(" %[^\n]",&var);
        strMinuscula(var);
        printf("=== Texto em letras Minusculas ===\n");
        lerString(var);
        semEspaco(var);
        printf("\n\n=== Texto Sem Expacos Sucessivos=== \n");
        lerString(var);
        int i = contaVogal(var);
        int j= contaString(var);
        printf("\nPercentual de Consoantes: %.2lf",(double)i/(double)j);

        printf("\n\nDseja Continuar S-N? ");
        scanf(" %c",&c);
    }while(c=='s'||c=='S');

    return 0;
}
