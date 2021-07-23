/**6) Elaborar um programa que leia um valor que se refere à altura de uma pessoa e mostre uma mensagem
conforme a tabela a seguir. Utilizar variável do tipo float.**/
#include <stdio.h>

int main (){
    float var;

    printf("Informe Sua Altura[Em Metros]: ");
    scanf("%f",&var);

    if(var>=1.50&&var<=1.80){
        printf("Altura entre um metro e cinquenta e um metro e oitenta centímetros");
    }
    else if(var>1.80){
        printf("Altura acima de um metro e oitenta centímetros");
    }
    else{
        printf("Altura abaixo de um metro e cinquenta centimetros");
    }

}
