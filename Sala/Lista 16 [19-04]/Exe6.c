/**6) Ler dois valores que representam os limites do intervalo. Apresentar os valores pares e divisíveis por cinco
desse intervalo em ordem decrescente. O usuário pode informar os valores em ordem crescente ou
decrescente.**/
#include <stdio.h>

int main(){

    int limSup,limInf;
    char c;

    do{
        do{
            printf("Informe um Valor para o Limite Inferior do Intervalo: ");
            scanf("%d",&limInf);
        }while(limInf<0);
        do{
            printf("Informe um Valor para o Limite Superior do Intervalo: ");
            scanf("%d",&limSup);
        }while(limSup<0);

        if(limSup<limInf){
            int aux=limSup;
            limSup=limInf;
            limInf=aux;
        }

        for(int i=limSup;i>limInf;i--){
            if(i%2==0&&i%5==0){
                printf("%d    ",i);
            }
        }

        printf("\n\nDeseja Continuar S-N? ");
        scanf(" %c",&c);
    }while(c=='S'||c=='s');
}
