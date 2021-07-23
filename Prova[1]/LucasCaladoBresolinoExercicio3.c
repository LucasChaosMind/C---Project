#include <stdio.h>
#include <math.h>

int main()
{

    int limIn,limFin,num1,num2,j,aux,cont,div=0,primo=0;
    double media=0;
    do
    {
        printf("Informe o valor inicial do intervalo: ");
        scanf("%d",&limIn);
    }
    while(limIn<0);

    do
    {
        printf("Informe o valor final do intervalo: ");
        scanf("%d",&limFin);
    }
    while(limFin<0);


    j=limIn;
    cont=0;
    j=limIn;
    int i;
    /**usei o for que inicia a contagem apartir de limInicial [inicializa "i" com limIn] equnato o contador[cont] for menor
    que o limite final, ja que cont conta quantas raizes de "i" são raizes dentro do limite final , basicamente usei o for por questão de controle ja que ele testa primeiro
    e faz depois, alem dele ja ter a facilidade de inilializar a variavel com um valor, seria possivel fazer ultilizando um while,
    mas eu sou muito acustumado com o for, ja te fiz exercicios de fibonaci com while, mas achei complexo de se entender,
    então pela praticidade e pela questar dele sempre testar primeiro e fazer depois usei essa estrutura**/
    for(i=limIn; cont<limFin; i++)
    {
        if(sqrt(i)==j)
        {

            cont++;
            num1=1;
            num2=1;
            media+=i;

            printf("%d [raiz %d] ==> %d ",i,j,1);
            /**Aqui inilicazo j com 1 e faço ele incrementar de um em um, enquanto passo por paramentro
            que ele faça isso enquanto num2 que é o valor mais "alto" da sequencia de fibonacci for menor que
            que i que é o valor do quadrado pereito que estamos usando como paramentro para o fibonacci que estamos **/
            for(int j=1; num2<i; j++)
            {
                printf("%d ",num2);
                aux=num1+num2;
                num1=num2;
                num2=aux;
            }
            printf("\n");
            //verifica se é primo usei for pelo mesmo motivo do exercicio 1, mas simples e versatil e testa primeiro e execulta depois
            for(int k=1; k<j; k++)
            {
                if(i%k==0)
                {
                    div++;
                }
            }
            if(div==1)
            {
                primo++;
                div=0;
            }
            div=0;
            j++;
        }

    }
    printf("\n\nMedia dos numeros quadrados perfeitos: %.2lf",media/cont);
    printf("\nQuantidade de raizes que sao numeros primos %d",primo);

    return 0;
}
