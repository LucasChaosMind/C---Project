/**3) Ler um número N qualquer maior ou igual a 1 e menor ou igual a 50 e apresentar o valor obtido da
multiplicação sucessiva de N por 2, enquanto o produto for menor que 250 (N*2; N*2*2; N*2*2*2; etc.). O valor
N deverá ser verificado quanto a sua validade. Caso o usuário informe um valor fora da faixa, o programa
deverá informar que o valor digitado não é válido e repetir a leitura.
Atenção: o produto deve ser menor que 250.**/
#include <stdio.h>

int main (){

    char c;
    int var;
    do{
        do{
            printf("Informe um Numero na Faixa de 1 a 50: ");
            scanf("%d",&var);
        }while(var<1&&var>50);

        do{
            var*=2;
            if(var<250){
             printf("N * 2 = %d\n",var);
            }
        }while(var<250);

        printf("\n\nDeseja Continuar S-N? ");
        scanf(" %c",&c);
    }while(c=='s'||c=='S');
}
