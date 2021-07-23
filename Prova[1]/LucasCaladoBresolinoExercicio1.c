/**Quest�o 1 (3 pontos) - Fa�a um programa que leia um n�mero positivo de cinco d�gitos e armazene cada d�gito
em uma vari�vel diferente. Calcule e mostre na tela:
a) A soma dos d�gitos;
b) O inverso do n�mero;
c) Se o inverso do n�mero � ou n�o um n�mero primo;
d) Se o n�mero � ou n�o um n�mero pal�ndromo (n�mero pal�ndromo � aquele cujo inverso � igual a ele pr�prio).**/
#include <stdio.h>

int main (){

    int var,var1,var2,var3,var4,var5,soma,inv,cont=0;

    //Entrada de dados
    printf("Informe um numero com cinco digitos: ");
    scanf("%d",&var);

    //quebrando os digitos um por um
    var1=var/10000;
    var2=(var/1000)%10;
    var3=(var/100)%10;
    var4=(var/10%10);
    var5=var%10;

    //mostrando os numeros "quebrados" em uma unidade
    printf("\nPrimeiro Digito: %d",var1);
    printf("\nSegundo digito: %d",var2);
    printf("\nTerceiro digito: %d",var3);
    printf("\nQuarto digito: %d",var4);
    printf("\nQuinto digito: %d",var5);

    //calculando e exibindo a soma
    soma=(var1+var2+var3+var4+var5);
    printf("\nSoma %d",soma);

    //calculando o valor inverso e armazenando em uma varizavel e depois imprimindo
    inv = (var5*10000)+(var4*1000)+(var3*100)+(var2*10)+var1;
    printf("\nInverso do numero: %d",inv);

    /*verificando se o numero � primo, usando a estrutura de repeti��o
    for para que ele primeiro cheque a intru��o antes de execultar
    no caso, ele checa se o valor de i � menor que o valor inverso de var
    e abaixo dele existe um if contando os divisores encontrados, caso so tenha 1,
    pois a contagem para antes do proprio numero ele � primo*/

    for(int i=1;i<inv;i++){
        if(inv%i==0){
            cont++;
        }
    }
    if(cont==1){
        printf("\nInverso do numero e um numero primo!");
    }
    else{
        printf("\nO inverso do numero nao e primo!");
    }
    //verificando de inverso e o valor inverso e o valor digitado s�o iguais se for � palindromo
    if(var==inv){
        printf("\nO numero %d e um numero palindromo",var);
    }
    else{
        printf("O numeor %d nao e um numeo palindromo",var);
    }

    return 0;
}
