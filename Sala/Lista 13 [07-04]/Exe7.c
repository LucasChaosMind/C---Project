/**7) Fa�a o programa que apresente a seguinte sa�da como no exemplo, perguntando ao usu�rio o n�mero
m�ximo (deve ser positivo).
**/
#include <stdio.h>

int main (){

    int var;
    char c;
    do{
        do{
            printf("Informe um Numero Positivo: ");
            scanf("%d",&var);
        }while(var<=0);

        for(int i=1;i<=var;i++){
            for(int j=0;j<i;j++){
                printf("%d\t",i);
            }
            printf("\n");
        }
        printf("\n\nDeseja Continuar S-N? ");
        scanf(" %c",&c);
    }while (c=='S'||c=='s');

    return 0;
}
