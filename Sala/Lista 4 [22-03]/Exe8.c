/**8) Fa�a um programa que leia tr�s notas de um aluno e calcule a m�dia ponderada, com os pesos 1, 3 e 4,
respectivamente, e:
a) Se a m�dia obtida est� entre 6 a 10 informar que o aluno est� aprovado;
b) Se a m�dia obtida est� entre 4 e 5,9 informar que o aluno est� em recupera��o. Nesse caso, ler a nota de
recupera��o e calcular a m�dia final (que � a m�dia entre a m�dia anual e a nota de recupera��o);
b.1) Se a m�dia final � menor que 5 informar que o aluno est� reprovado ap�s recupera��o;
b.2) Se � igual ou maior que 5 informar que o aluno est� aprovado ap�s recupera��o;
c) Se a m�dia obtida � menor que 4 informar que o aluno est� reprovado antes da recupera��o.**/
#include <stdio.h>

int main (){
    float nota1,nota2,nota3,aux;

    printf("Informe a Nota[1]: ");
    scanf("%f",&nota1);
    printf("Informe a Nota[2]: ");
    scanf("%f",&nota2);
    printf("Informe a Nota[3]: ");
    scanf("%f",&nota3);

    aux=((nota1*1)+(nota2*3)+(nota3*4))/8;
    printf("\nNota: %.2f ",aux);
    if(aux>=6&&aux<=100){
        printf("Aprovado!");
    }

    else if (aux<6&&aux>=4){
        float var;
        printf("De Recuperacao!");
        printf("\nInforme a Nota da Recuperacao!");
        scanf("%f",&var);

        aux=(aux+var/2);

        if(aux>=5){
            printf("\nAprovado!");
        }
        else{
            printf("\nReprovado!");
        }
    }
    else{
        printf("Aluno Reprovado antes da Recuperacao!");
    }

    return 0;
}
