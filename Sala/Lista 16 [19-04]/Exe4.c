/**4) Apresentar n valores que são divisíveis por x e y. n, x e y são informados pelo usuário e devem ser maiores
que zero. Validar**/
#include <stdio.h>

int main (){

    int v1,v2,var,cont;
    char c;

    do{
        cont=0;
        do{
            printf("Quantos Valores Deseja Mostrar: ");
            scanf("%d",&var);
        }while(var<0);

        do{
            printf("Informe o Primero Divisor: ");
            scanf("%d",&v1);
        }while(v1<0);
        do{
            printf("Informe o Segundo Divisor: ");
            scanf("%d",&v2);
        }while(v2<0);

        for(int i=1;cont<var;i++){
            if(i%v1==0&&i%v2==0){
                printf("%d  ",i);
                cont++;
            }
        }

        printf("\n\nDeseja Continuar S-N? ");
        scanf(" %c",&c);
    }while(c=='S'||c=='s');

    return 0;
}
