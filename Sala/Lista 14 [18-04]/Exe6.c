/**6) Apresentar os n primeiros n�meros pares e divis�veis por 3 informados pelo usu�rio (validar para que n seja
diferente de 0). Se o usu�rio informar um n�mero negativo transform�-lo em positivo (sem usar fun��es prontas)
antes de utilizar.
Por exemplo, se o usu�rio informar 4, o programa dever� mostrar os quatro primeiros n�meros pares que s�o
divis�veis por tr�s: 0, 6, 12 e 18.**/
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
