/**2) Ler um número positivo, validar a entrada repetindo a leitura até que seja informado um número que
atende essa condição. Esse número representa a quantidade de números primos a serem mostrados.**/
#include <stdio.h>

int main (){

    int cont,var, aux;
    char c;

    do{
          do{
            printf("Informe a Quantidade de Numeros Primos: ");
            scanf("%d",&var);
          }while(var<=0);

            int j,i;
            aux=cont=0;
            for(i=2;cont<var;i++){
                for(j=1;j<i;j++){
                    if(i%j==0){
                        aux++;
                    }
                }
                if(aux==1){
                    printf("%d \t",i);
                    aux=0;
                    cont++;
                }
                else{
                    aux=0;
                }

            }


        printf("\nDeseja Continuar S-N? ");
        scanf(" %c",&c);
    }while(c=='S'||c=='s');

}
