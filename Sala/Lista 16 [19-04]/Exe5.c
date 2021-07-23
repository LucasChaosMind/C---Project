/**5) Apresentar n valores divisíveis por 5 e não divisíveis por 2 com x valores por linha. Validar n e x para que
sejam positivos.**/
#include <stdio.h>

int main (){

    int lin, div,cont;
    char c;

    do{
         cont=0;

        do{
           printf("Quantos valores Divisiveis por 5 e não divisiveis por 2 desseja mostrar: ");
           scanf("%d",&div);
        }while(div<0);
        do{
            printf("Quantos Elementos por Linha? ");
            scanf("%d",&lin);
        }while(lin<0);

        for(int i=1;cont <div;i++){
            if(i%5==0&&i%2!=0){
                printf("%d\t",i);
                cont++;
                if(cont%lin==0){
                    printf("\n");
                }
            }
        }

        printf("\n\nDeseja Continuar S-N? ");
        scanf(" %c",&c);
    }while(c=='S'||c=='s');

    return 0;
}
