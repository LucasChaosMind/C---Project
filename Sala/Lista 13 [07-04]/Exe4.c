/**4) Ler um número positivo e maior que zero (validar a entrada). Esse número indica a quantidade de valores
divisíveis por 5 que devem ser mostrados. Apresentar n valores por linha. n é informado pelo usuário e deve
ser maior que zero. Validar a entrada.**/
#include <stdio.h>

int main (){

    int var, lim;
    char c;

    do{
            int cont=0,aux=0;

            do{
                printf("Informe o Numero de Valores a Ser Mostrados: ");
                scanf("%d",&var);
            }while(var<=0);
            do{
                printf("Informe o Grupos a ser exibidos: ");
                scanf("%d",&lim);
            }while(lim<=0);

            for(int i=1;cont<var;i++){
                if(i%5==0){
                    if(aux==lim){
                    printf("\n");
                    aux=0;
                }
                    printf("%d\t",i);
                    cont++;
                    aux++;
                }
            }
        printf("\nDeseja Continuar S-N? ");
        scanf(" %c",&c);

    }while(c=='S'||c=='s');

    return 0;
}
