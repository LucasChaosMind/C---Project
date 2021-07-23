/**3) Ler três valores inteiros diferentes e colocá-los em ordem crescente. Os valores devem ser apresentados
com uma instrução:**/
#include <stdio.h>

int main (){
    int x,y,z,maior,menor,meio;

    printf("Informe o Numero[X]: ");
    scanf("%d",&x);
    printf("Informe o Numero[Y]: ");
    scanf("%d",&y);
    printf("Informe o Numero[Z]: ");
    scanf("%d",&z);

    if(x<y&&x<z){
        menor=x;
        if(y>z){
            maior=y;
            meio=z;
        }
        else{
            maior=z;
            meio=y;
        }
    }
    else if(y<x&&y<z){
        menor=y;
        if(x>z){
            maior=x;
            meio=z;
        }
        else{
            maior=z;
            meio=y;
        }
    }
    else{
        menor=z;
        if(y>x){
            maior=y;
            meio=x;
        }
        else{
            maior=x;
            meio=y;
        }
    }
    printf("Menor: %d Meio %d Maior %d",menor,meio,maior);

    return 0;
}
