/**Quest�o 2 (3,3 pontos) - Gerar um vetor que n�o contenha n�meros repetidos com 10 elementos aleat�rios entre 0 e 50. Utilizar uma fun��o
para verificar se cada elemento do vetor � ou n�o um n�mero primo. Essa fun��o retorna 0 para indicar que o n�mero � primo ou 1 para indicar
que o n�mero n�o � primo. Criar uma matriz 10x3 onde a primeira coluna vai armazenar o �ndice do vetor, a segunda coluna vai armazenar o
elemento do vetor e a terceira coluna vai armazenar 0 se o elemento do vetor for um n�mero primo ou 1 caso o elemento do vetor n�o seja um
n�mero primo. Fazer a m�dia dos n�meros primos encontrados no vetor. A sa�da do programa deve ser apresentada como no exemplo a seguir:**/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geraVetorAleatorioSemRepticao(int vet[],int tam, int lim){

    srand(time(NULL));
    int j;

    for(int i=0;i<tam;i++){
        vet[i]=rand() % (lim + 1);
        for(j=0;j<i;j++){
            if(vet[i]==vet[j]){
                i--;
            }
        }
    }
}
int primo (int var){
    int turn=1,cont=0;

    for(int i=1;i<var;i++){
        if(var%i==0){
            cont++;
        }
    }

    if(cont==1){
        turn=0;
    }

    return turn;
}

void imprimeVet(int vet[],int tam){
    for(int i=0;i<tam;i++){
        printf("%d\t",vet[i]);
    }
}

int main (){

    char c;
    int vet[10],matrix[10][3],i,j;
    double media, cont;

    do{
         media=0;
         cont=0;

        printf("=== Vetor ===\n");
        geraVetorAleatorioSemRepticao(vet,10,50);
        imprimeVet(vet,10);

        printf("\n\nIndice Numero Primo\n");
        for(i=0;i<10;i++){
            matrix[i][0]=i;
            matrix[i][1]=vet[i];
            matrix[i][2]=primo(matrix[i][1]);
        }
        for(i=0;i<10;i++){
            for(j=0;j<3;j++){
                printf("%d\t",matrix[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<10;i++){
            if(matrix[i][2]==0){
                media+=matrix[i][1];
                cont++;
            }
        }
        printf("\nMedia dos numeros primos: %.2lf",media/cont);

       printf("\n\nDeseja Continuar S-N? ");
       scanf(" %c",&c);
    }while(c=='S'||c=='s');

    return 0;
}
