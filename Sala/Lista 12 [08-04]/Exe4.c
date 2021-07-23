/***4) Elaborar um programa que solicita a idade de um profissional e se ele é do tipo autônomo ou funcionário, calcula e
mostra:
a) O total de profissionais autônomos com menos de 18 anos.
b) A média das idades dos funcionários com mais de 18 anos.
O programa deve validar as entradas: permitir somente valores positivos (maior que 0) para a idade e A/a/F/f (autônomo
ou funcionário) para o tipo de profissional.
O programa termina quando for informado 0 ou um valor negativo para a idade, que não deve ser considerado.
Portanto, ao ser informado 0 ou um valor negativo para a idade, não deve ser solicitado o tipo de profissional.**/
#include <stdio.h>

int main ()
{
    int date, kid=0, cont=0,idade=0;
    char var;

    do
    {
        printf("Informe a idade: ");
        scanf("%d",&date);

        if(date<=18)
        {
            do
            {
                printf("Autonomo ou Funcionario [A-F]: ");
                scanf(" %c",&var);
                printf("%c",var);
                if(var=='A'||var=='a')
                {
                    kid++;
                }
                else if(var!='F'||var!='A'){
                    printf("\nValor Invalido!");
                }
            }while(var!='F'||var!='A');
        }
        else if(date>18)
            {
                do
                {
                    printf("Autonomo ou Funcionario [A-F]: ");
                    scanf(" %c",&var);
                    printf("%c",var);
                    if(var=='F'){
                        idade+=date;
                        cont++;
                    }
                }while(var!='F'||var!='A');
        }
    }while(date>0);

    printf("\nTotal de Proficionais autonomos com Menos de 18 anos: %d",kid);
    printf("\nmedia das idades dos Funcionarios com mais de 18 anos: %.2lf",(double)idade/cont);

    return 0;
}
