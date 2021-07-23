/***) Ler três valores inteiros diferentes, encontrar e mostrar o menor deles. Deve ser criada uma variável para
armazenar o menor número.**/
#include <stdio.h>

int main (){
    int x,y,z,aux;

    printf("Informe x: ");
    scanf("%d",&x);
    printf("Informe Y: ");
    scanf("%d",&y);
    printf("Informe Z: ");
    scanf("%d",&z);

    if(x<y&&x<z){
        aux=x;
        printf("X Eh o Menor %d",aux);
    }
    else if(y<x&&y<z){
        aux=y;
        printf("Y Eh o Menor %d",aux);
    }
    else if(z<x&&z<y){
        aux=z;
        printf("Z Eh o Menor %d",aux);
    }
    else{
        printf("Valores de X Y e Z são Igauais ou Invalidos!");
    }
    return 0;
}
