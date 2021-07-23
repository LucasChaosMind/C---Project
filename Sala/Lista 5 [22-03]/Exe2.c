/**2) Ler três valores inteiros diferentes, encontrar e mostrar o número do meio. Deve ser criada uma variável
para armazenar o número do meio.
Exemplo: Seja num1 = 5, num2 = 8 e num3 = 1, então o número do meio é 5.**/
#include <stdio.h>

int main (){
    int x,y,z,aux;

    printf("Informe x: ");
    scanf("%d",&x);
    printf("Informe Y: ");
    scanf("%d",&y);
    printf("Informe Z: ");
    scanf("%d",&z);

    if((x>y&&x<z)||(x>z&&x<y)){
        aux=x;
        printf("X Eh o Do Meio! %d",x);
    }
    else if((y>x&&y<z)||(y<x&&y>z)){
        aux=y;
        printf("Y Eh o Do Meio! %d",aux);
    }
    else{
        aux=z;
        printf("Z Eh o Do Meio! %d",aux);
    }
    return 0;
}
