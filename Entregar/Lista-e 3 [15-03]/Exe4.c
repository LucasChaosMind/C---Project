/**3) Ler um n�mero inteiro com at� 4 d�gitos. Separar os d�gitos desse n�mero e mostr�-los em linhas distintas.
Exemplo:**/

#include <stdio.h>

int main (){
    int num,v1,v2,v3,v4,v5;

    printf("Informe o Numero com Ate 5 Digitos: ");
    scanf("%d",&num);

    v1=num/10000;
    v2=(num/1000)%10;
    v3=(num/100)%10;
    v4=(num/10)%10;
    v5=num%10;

    printf("\n%d O Primeiro!",v1);
    printf("\n%d O Segundo!",v2);
    printf("\n%d O Terceiro!",v3);
    printf("\n%d O Quarto!",v4);
    printf("\n%d O Quinto!",v5);
    printf("\nA Soma dos Digitos: %d",v1+v2+v3+v4+v5);

    return 0;
}
