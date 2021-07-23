#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geraVetorAleatorio (int vet[],int tam,int lim){

    srand(time(NULL));
    int i,j;

    for(i=0;i<tam;i++){
        vet[i]= rand() % lim +1;
        for(j=0;j<i&&i!=0;j++){
            if(vet[i]==vet[j]){
                i--;
            }
        }
    }
}
void bolha (int vet[],int tam){
    int i,j,aux;

    for(i=0;i<tam;i++){
        for(j=tam-1;j>0;j--){
           if(vet[j-1]>vet[j]){
            aux=vet[j-1];
            vet[j-1]=vet[j];
            vet[j]=aux;
           }
        }
    }
}

void  imprime(int vet[],int tam){
    for(int i=0;i<tam;i++){
        printf("%d\t",vet[i]);
    }
}
void unix (int a[],int b[],int c[]){

    int i,j=0,k=0;

    for(i=0;i<=10;i++){
        c[i]=a[i];
       }
    for(i=0;i<10;i++){
    c[i+10]=b[i];
    }

}

int main (){

    char cx;
    int a[10],b[10],c[20];

    do{
        geraVetorAleatorio(a,10,15);
        bolha(a,10);
        printf("===Vetor A===\n");
        imprime(a,10);

        geraVetorAleatorio(b,10,10);
        bolha(b,10);
        printf("\n===Vetor B===\n");
        imprime(b,10);



        printf("\n===Uniao===\n");
        unix(a,b,c);
        imprime(c,20);

        printf("\n\nDseja Continuar S-N? ");
        scanf(" %c",&cx);
    }while(cx=='S'||cx=='s');

    return 0;
}
