/**3) Ler dois n�meros positivos que representam os limites inferior e superior de um intervalo. Validar a entrada
para que sejam informados n�meros positivos. � mais adequado valid�-los separadamente. Validar tamb�m
para que o valor do limite superior seja maior e diferente que o valor do limite inferior. Imprimir os n�meros
m�ltiplos de 3 desse intervalo e fornecer a m�dia deles.**/

#include <stdio.h>

int main(){
    int limSup,limInf;
    char c;


    do{
        double media=0;
        int cont=0;

        do{
            printf("Informe O valor do Limite Inferior de um Intevalo: ");
            scanf("%d",&limInf);
        }while(limInf<0);
        do{
            printf("Informe O valor do Limite Superior de um Intevalo: ");
            scanf("%d",&limSup);
        }while(limSup<0);

        for(int i=limInf;i<limSup;i++){
            if(i%3==0){
                media+=i;
                cont++;
                printf("%d\t",i);
            }
        }
        printf("\nA Media dos Multiplos de 3: %.2lf",media/cont);

        printf("\n\nDeseja Continuar S-N? ");
        scanf(" %c",&c);
    }while(c=='S'||c=='s');

    return 0;
}
