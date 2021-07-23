/**3) Faça um programa que mostre o resultado da seguinte soma, sendo n o valor informado pelo usuário:
Soma = 1 + 1/2 + 1/3 + 1/4 + 1/5 + … + 1/n**/
#include <stdio.h>

int main (){

    double var, aux=0;

    printf("Infome um Numero: ");
    scanf("%lf",&var);

    for(double i=1;i<=var;i++){
        aux= aux +(1/i);
        printf("%.lf / %.lf",1.0,i);
        if(i<var-1){
            printf(" + ");
        }
    }
    printf("  -- Total: %.2lf",aux);
}
