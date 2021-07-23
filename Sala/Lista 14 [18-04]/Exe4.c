/**4) Escreva um programa que leia o valor de uma aplicação, o percentual de rendimento mensal obtido por esta
aplicação e o período do investimento; e retorne o valor da aplicação ao final do período de investimento. Obs.:
A cada 12 meses o percentual de rendimento deve ser aumentado em 0,25%. Validar o valor da aplicação para
que seja positivo. Validar o percentual de rendimento para que seja um número entre 0 e 1. Validar o período
para que seja um valor positivo.**/
#include <stdio.h>

int main (){

    double var , apple;
    int time;
    char c;
    do{
        do{
            printf("Informe o Valor da Aplicacao: R$ ");
            scanf("%lf",&var);
        }while(var<0);
        do{
            printf("Informe o Rendimento Mensal [0 a 1]: ");
            scanf("%lf",&apple);
        }while(apple>1.0&&apple<0.0);
        do{
            printf("Informe o Periodo [Messes]: ");
            scanf("%d",&time);
        }while(time<0);

        printf("Mes     %% Rendimento     Valor\n");
        for(int i=1;i<=time;i++){
            if(i%12==0){
                apple+=0.25;
            }
            var*=(apple+1);
            printf("%d         %.2lf         %.2lf\n",i,apple,var);
        }

        printf("\n\nDeseja Continuar S-N? ");
        scanf(" %c",&c);
    }while(c=='S'||c=='s');

    return 0;
}
