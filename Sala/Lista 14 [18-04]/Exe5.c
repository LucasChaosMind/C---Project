/**5) Sabendo-se que na matem�tica os n�meros primos come�am a partir do 2, solicite ao usu�rio que forne�a
o valor do limite superior de um intervalo (validar para que seja maior que 2). O programa dever� fornecer todos
os n�meros primos presentes no intervalo. Por exemplo, se o usu�rio informar 10, o programa dever� fornecer
todos os n�meros primos entre 2 e 10, que s�o 2, 3, 5 e 7**/
#include <stdio.h>

int main (){

    int cont=0,var;
    char c;
    do{
        cont=0;
        do{
            printf("Informe o Limite Superior do Intervalo: ");
            scanf("%d",&var);
            if(var<2){
                printf("\nNo Bro! Bigger of two");
            }
        }while(var<2);

        for(int i=2;i<=var;i++){
            for(int j=1;j<i;j++){
                if(i%j==0){
                    cont++;
                }
            }
            if(cont==1){
                printf("%d\t",i);
                cont=0;
            }
            cont=0;
        }

        printf("\n\nDeseja Continuar S-N? ");
        scanf(" %s",&c);
    }while(c=='S'||c=='s');
}
