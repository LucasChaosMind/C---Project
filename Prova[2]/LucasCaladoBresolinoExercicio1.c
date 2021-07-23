/**Questão 1 (3,3 pontos) - Gerar dois vetores com 5 elementos cada, os elementos devem ser distintos (não repetidos). Os valores para o vetor
devem ser gerados de forma aleatória entre 1 e 15 para o primeiro vetor e entre 1 e 10 para o segundo vetor. Gerar um terceiro vetor cujos
valores será o resultado da interseção dos elementos dos dois primeiros vetores. Gerar também um quarto vetor que terá como valores o
resultado da união dos valores dos dois primeiros vetores. Utilizar o conceito matemático de interseção e união entre conjuntos. Mostrar os
quatro vetores.
 Interseção dos conjuntos A e B é o conjunto de todos os objetos que são membros de ambos A e B. A interseção de {1, 2, 3} e {2, 3, 4} é
o conjunto {2, 3}.
 União dos conjuntos A e B é o conjunto de todos os objetos que são membros de A, ou B, ou ambos. A união de {1, 2, 3} e {2, 3, 4} é o
conjunto {1, 2, 3, 4}.
**/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geraVetorAleatorio (int vet[],int tam, int lim){

    srand(time(NULL));
    int j;

    for(int i=0;i<tam;i++){
        vet[i]=rand() % lim + 1;
        for(j=0;j<i;j++){
            if(vet[i]==vet[j]){
                i--;
            }
        }
    }
}
int contIntersecao(int a[],int b[],int tam){

    int cont=0,j,contIg=0,aux=0;

    for(int i=0;i<tam;i++){
        contIg=0;
        for(j=0;j<tam;j++){
            if(a[i]==b[j]){
                contIg++;
            }
            if(contIg>1){
                aux=a[i];
            }
            if(contIg==1){
                cont++;
                contIg=2;
            }
        }

    }
    return cont;
}
int contUniao(int a[],int b[],int tam){
    int j,cont=0,contIg=0,aux;

    for(int i=0;i<tam;i++){
        contIg=0;
        for(j=0;j<tam;j++){
            if(a[i]==b[j]){
                contIg++;
            }
            if((contIg==0||contIg==1)){
                cont++;
            }
        }
    }
    return cont;
}
void Intersecao(int a[],int b[],int c[],int tam){
    int j,contIg=0,k=0,aux=0;

    for(int i=0;i<tam;i++){
        contIg=0;
        for(j=0;j<tam;j++){
           if(a[i]==b[j]){
                contIg++;
           }
           if(contIg==1){
                c[k]=a[i];
                k++;
                contIg=2;
           }
        }

    }
}
void uniao (int a[],int b[],int c[],int tam){

    int k=0,j,aux=0,contIg=0;

    for(int i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(a[i]==b[j]){
                contIg++;
            }
            /*if(contIg>=1){
                aux=a[i];
            }*/
            if((contIg==0||contIg==1)&&aux!=a[i]){
                c[k]=a[i];
                k++;
            }
        }
        contIg=0;
        for(j=0;j<tam;j++){
             if(a[i]==b[j]){
                contIg++;
            }
            if(contIg>=1){
                aux=a[i];
            }
            if((contIg==0||contIg==1)&&aux!=a[i]){
                c[k]=b[i];
                k++;
            }
        }
        contIg=0;
    }
}
void imprimeVet(int vet[],int tam){
    for(int i=0;i<tam;i++){
        printf("%d\t",vet[i]);
    }
}
int main (){

    char c;
    int vet1[5],vet2[5];


    do{

        printf("=== Vetor 1 ===\n");
        geraVetorAleatorio(vet1,5,15);
        imprimeVet(vet1,5);

        printf("\n=== Vetor 2 ===\n");
        geraVetorAleatorio(vet2,5,10);
        imprimeVet(vet2,5);

        printf("\n\n=== Intersecao ===\n");
        int inter = contIntersecao(vet1,vet2,5);
        int vet3[inter];
        printf("\n---%d---\n",inter);
        Intersecao(vet1,vet2,vet3,5);
        imprimeVet(vet3,inter);

        printf("\n\n=== Uniao ===\n");
        int unix = contUniao(vet1,vet2,5);
        int vet4[unix];
        uniao(vet1,vet2,vet4,5);
        imprimeVet(vet4,unix);

        printf("\n\nDeseja Continuar S-N? ");
        scanf(" %c",&c);
    }while(c=='S'||c=='s');

    return 0;
}
