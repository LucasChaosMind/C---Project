/**2) Ler dois n�meros que representam os limites de um intervalo. Validar a entrada, o usu�rio dever� fornecer
valores positivos. Mostrar o intervalo em ordem crescente.
a) Mostrar os n�meros primos desse intervalo, com cinco n�meros por linha.
b) Calcular a m�dia dos m�ltiplos de 3 e de 7 desse intervalo. Validar para que n�o seja realizada uma
divis�o por zero**/
#include <stdio.h>

int main (){

    int aux,limSup,limInf,cont,thee;
    double media;
    char c;

    do{
            cont=thee=media=0;

        do{
            printf("Informe um Valor para o Limite Inforior: ");
            scanf("%d",&limInf);
        }while(limInf<=0);
        do{
            printf("Informe um Valor para o Limite Superior: ");
            scanf("%d",&limSup);
        }while(limSup<=0);

        if(limInf>limSup){
            aux = limInf;
            limInf = limSup;
            limSup = aux;
        }
         aux=1;

        for(int i=limInf;i<limSup;i++){
            for(int j=1;j<i;j++){
                if(i%j==0){
                    cont++;
                }
                if(i%3==0&&i%7==0){
                    media+=i;
                    thee++;
                }
            }
             if(cont==1&&i!=1){
                    printf("%d  ",i);
                    if(aux==5){
                        printf("\n");
                        aux=1;
                    }
                    cont=0;
                    aux++;
                }
                cont=0;
        }
        printf("\nMedia dos Multiplos de 3 e 7: %.2lf",media/thee);

        printf("\n\nDeseja Continuar S-N? ");
        scanf(" %c",&c);
    }while(c=='S'||c=='s');

    return 0;
}
