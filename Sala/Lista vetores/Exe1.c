#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geradorAleatorio(int vet[],int tam, int lim){
    srand(time(NULL));

    for(int i=0;i<tam;i++){
        vet[i]= rand() % lim + 1;
        for(int j=0;j<i&&i>0;j++){
            if(vet[i]==vet[j]){
                i--;
            }
        }
    }
}
void bolha (int vet[],int tam){
    int aux;
    for(int i=0;i<tam;i++){
        for(int j=tam-1;j>0;j--){
            if(vet[j-1]>vet[j]){
                aux=vet[j-1];
                vet[j-1]=vet[j];
                vet[j]=aux;
            }
        }
    }
}


int main (){

    int vet[5],i,j;
    char c;

    do{
        geradorAleatorio(vet,5,10);
        bolha(vet,5);
        printf("=== Vetor ===\n");
        for(i=0;i<5;i++){
            printf("%d\t",vet[i]);
        }

        for(i=0;i<5;i++){
            printf("\n==Tabuada De %d==\n",vet[i]);
            for(j=0;j<10;j++){
                printf("%d x %d = %d\n",vet[i],j,vet[i]*j);
            }
        }
        printf("\n\nDeseja continuar S-N? ");
        scanf(" %c",&c);
    }while(c=='S'||c=='s');

    return 0;
}
