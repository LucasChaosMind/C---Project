/**1) Uma �rvore A tem 1,50 metros e cresce 2 cent�metros por ano, enquanto uma �rvore B tem 1,10 metros e cresce 3 cent�metros
por ano. Construa um programa que calcule e imprima quantos anos ser�o necess�rios para que a �rvore B seja maior que a
�rvore A.**/
#include <stdio.h>

int main (){

    double a=1.50,b =1.10;
    int i;
    for(i=0;b<=a;i++){
        a+=0.02;
        b+=0.03;
    }
    printf("Altura Final da Arvore A: %.2lf",a);
    printf("\nAtura Final da Arvore B: %.2lf",b);
    printf("\n\nSerao Necessarios %d Anos para que a Arvore B Seja Maior que a A\n",i);

    return 0;
}
