/**8) Faça um programa que leia três notas de um aluno e calcule a média ponderada, com os pesos 1, 3 e 4,
respectivamente, e:
a) Se a média obtida está entre 6 a 10 informar que o aluno está aprovado;
b) Se a média obtida está entre 4 e 5,9 informar que o aluno está em recuperação. Nesse caso, ler a nota de
recuperação e calcular a média final (que é a média entre a média anual e a nota de recuperação);
b.1) Se a média final é menor que 5 informar que o aluno está reprovado após recuperação;
b.2) Se é igual ou maior que 5 informar que o aluno está aprovado após recuperação;
c) Se a média obtida é menor que 4 informar que o aluno está reprovado antes da recuperação.**/
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
