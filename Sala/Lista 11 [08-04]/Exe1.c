/**1) Uma árvore A tem 1,50 metros e cresce 2 centímetros por ano, enquanto uma árvore B tem 1,10 metros e cresce 3 centímetros
por ano. Construa um programa que calcule e imprima quantos anos serão necessários para que a árvore B seja maior que a
árvore A.**/
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
