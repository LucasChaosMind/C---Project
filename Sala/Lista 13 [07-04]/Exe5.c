/**5) Fa�a o programa que apresente a seguinte sa�da como no exemplo, solicitando ao usu�rio o n�mero
m�ximo (deve ser positivo).**/
#include <stdio.h>

int main (){

    int var;
    char c;

    do{
        int cont=0;

        do{
            printf("Informe um Numero Positivo: ");
            scanf("%d",&var);
        }while(var<0);

        for(int i=1;i<=var;i++){
            for(int j=1;j<=var;j++){
                if(cont==var){
                    printf("\n");
                    cont=0;
                }
                printf("%d\t",i);
                cont++;
            }
        }

        printf("\n\nDeseja Continuar S-N? ");
        scanf(" %c",&c);

    }while(c=='S'||c=='s');
}
