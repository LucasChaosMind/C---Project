#include <stdio.h>

int main (){

    int cont, tam,div,aux;
    char var,c;

    do{

        do{
            printf("Informe a quantidade de Caracteres que o seu primeiro nome possui: ");
            scanf("%d",&tam);
        }while(tam<=0);

        cont=0;
        do{
            div=0;
            printf("\n\nInforme o caracter %d do seu nome: ",cont);
            scanf(" %c",&var);

            aux =(int)var;
            /**usei o for para ir passando de numero em numero ate chegar no numero que representa o caractere digitado na tabela
             ascii, e contando cada um dos divisores. Usei o for por que ele testa primeiro e faz depois difrente de do-while por exemplo**/
            for(int i=1;i<=aux;i++){

                if(aux%i==0){
                    div++;
                }
            }
            printf("%d na tabela ACII tem %d divisores",aux,div);
            cont++;
        }while(cont<tam);

        printf("\n\nDeseja continuar no programa [S ou N]? ");
        scanf(" %c",&c);
    }while(c=='S'||c=='s');

    return 0;
}
