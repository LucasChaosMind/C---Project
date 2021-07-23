/**Questão 1 (3 pontos) - Faça um programa que leia um número positivo de cinco dígitos e armazene cada dígito
em uma variável diferente. Calcule e mostre na tela:
a) A soma dos dígitos;
b) O inverso do número;
c) Se o inverso do número é ou não um número primo;
d) Se o número é ou não um número palíndromo (número palíndromo é aquele cujo inverso é igual a ele próprio).**/
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

    /*verificando se o numero é primo, usando a estrutura de repetição
    for para que ele primeiro cheque a intrução antes de execultar
    no caso, ele checa se o valor de i é menor que o valor inverso de var
    e abaixo dele existe um if contando os divisores encontrados, caso so tenha 1,
    pois a contagem para antes do proprio numero ele é primo*/

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
    //verificando de inverso e o valor inverso e o valor digitado são iguais se for é palindromo
    if(var==inv){
        printf("\nO numero %d e um numero palindromo",var);
    }
    else{
        printf("O numeor %d nao e um numeo palindromo",var);
    }

    return 0;
}
