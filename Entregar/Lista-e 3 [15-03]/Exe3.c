/**3) Ler um n�mero inteiro com at� 4 d�gitos. Separar os d�gitos desse n�mero e mostr�-los em linhas distintas.
Exemplo:**/

#include <stdio.h>

int main (){
    int num,v1,v2,v3,v4;

    printf("Informe o Numero com Ate 4 Digitos: ");
    scanf("%d",&num);

    v1=num/1000;
    v2=(num/100)%10;
    v3=(num/10)%10;
    v4=(num)%10;

    printf("\n%d O Primeiro! Digito",v1);
    printf("\n%d O Segundo Digito!",v2);
    printf("\n%d O Terceiro Digito!",v3);
    printf("\n%d O Quarto Digito!",v4);

    return 0;
}
