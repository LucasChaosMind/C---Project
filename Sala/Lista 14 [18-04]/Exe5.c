/**5) Sabendo-se que na matemática os números primos começam a partir do 2, solicite ao usuário que forneça
o valor do limite superior de um intervalo (validar para que seja maior que 2). O programa deverá fornecer todos
os números primos presentes no intervalo. Por exemplo, se o usuário informar 10, o programa deverá fornecer
todos os números primos entre 2 e 10, que são 2, 3, 5 e 7**/
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
