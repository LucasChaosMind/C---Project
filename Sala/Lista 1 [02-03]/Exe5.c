/** 5) Tendo como entrada dois valores inteiros, elaborar um algoritmo para calcular e mostrar:
a) A soma desses valores;
b) A subtração do primeiro pelo segundo;
c) A multiplicação entre eles;
d) A divisão inteira do primeiro pelo segundo;
e) A divisão float do primeiro pelo segundo;
f) O resto da divisão do primeiro pelo segundo.**/
#include <stdio.h>

int main (){
    int vtotal1=0,vtotal2=0,vtotal3=0,vtotal4=0,vtotal6=0, num1=0 , num2=0;
    double vtotal5=0,aux1,aux2;

    printf("Informe o primeiro numero: ");
    scanf("%d",&num1);
    printf("Informe o segundo numero: ");
    scanf("%d",&num2);

    aux1=num1;
    aux2=num2;
    vtotal1= num1 + num2;
    vtotal2= num1 - num2;
    vtotal3= num1 * num2;
    vtotal4= num1 / num2;
    vtotal5= aux1 / aux2;
    vtotal6= num1 % num2;

    printf("%d + %d : %d\n",num1,num2,vtotal1);
    printf("%d - %d : %d\n",num1,num2,vtotal2);
    printf("%d * %d : %d\n",num1,num2,vtotal3);
    printf("%d / %d : %d\n",num1,num2,vtotal4);
    printf("%.lf / %.lf : %.2lf\n",aux1,aux2,vtotal5);
    printf("%d %% %d : %d\n",num1,num2,vtotal6);


}
