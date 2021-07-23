/**6) Apresentar os n primeiros números pares e divisíveis por 3 informados pelo usuário (validar para que n seja
diferente de 0). Se o usuário informar um número negativo transformá-lo em positivo (sem usar funções prontas)
antes de utilizar.
Por exemplo, se o usuário informar 4, o programa deverá mostrar os quatro primeiros números pares que são
divisíveis por três: 0, 6, 12 e 18.**/
#include <stdio.h>

int main (){

    int cont=0,var;
    char c;

    do{
        cont=0;
        do{
            printf("Quantos numeros Pares divisiveis por 3 Deseja: ");
            scanf("%d",&var);
        }while(var==0);

        if(var<0){
            var*=-1;
        }

        for(int i=0;cont<var;i++){
            if(i%2==0&&i%3==0){
                printf("%d   ",i);
                cont++;
            }
        }

        printf("\n\nDeseja Continuar S-N? ");
        scanf(" %s",&c);
    }while(c=='S'||c=='s');

    return 0;
}
