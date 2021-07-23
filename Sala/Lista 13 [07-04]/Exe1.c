#include <stdio.h>

int main (){

    double x, y;
    char c;

    do{
        do{
            printf("Informe X: ");
            scanf("%lf",&x);
            if(x<=0){
                printf("\nValor invalido!");
            }
        }while(x<=0);
        do{
            printf("Informe Y: ");
            scanf("%lf",&y);
            if(y<=0){
                printf("\nValor invalido!");
            }
        }while(y<=0);

        printf("Valor : %.2lf",x/y);
        printf("\nDeseja Repetir S-N? ");
        scanf(" %c",&c);

        //Na progamação dificilmente se usa o fflush ate a nivel de estrutura de dados
        //È comum usar aquele espaço antes do %c, e o guets, tambem não é usado uma vez que ele tem uma falha de segurança
        //E por isso se tornou algo inutil para a comunidade de progamadores em C
    }while(c=='s'||c=='S');

    return 0;
}
