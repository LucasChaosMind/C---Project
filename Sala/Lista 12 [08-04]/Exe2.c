/**2) Elaborar um programa que determine a potência de um número. O usuário informa a base e o expoente e o
programa informa o resultado da base elevada ao expoente. Não usar funções prontas do C para fazer o cálculo da
potência.**/
#include <stdio.h>

int main (){

    int base, exp;
    char c;

    do{
            int aux=1;
        do{
            printf("Informe o Valor da Base: ");
            scanf("%d",&base);
            if(base<=0){
                printf("\nValor invalido!");
            }
        }while(base<=0);

        do{
          printf("Infome o Valor do Expoente: ");
          scanf("%d",&exp);
          if(exp<=0){
            printf("\nValor Invalido!");
          }
        }while(exp<=0);

        for(int i=0;i<exp;i++){
            printf(" %d ",base);
            aux*=base;
            if(i>0&&i<exp-1){
                printf("*");
            }
            else{
                printf(" = %d",aux);
            }
        }

        printf("\n\nDeseja Continuar S-N? ");
        scanf(" %c",&c);
    }while(c=='S'||c=='s');

    return 0;
}
