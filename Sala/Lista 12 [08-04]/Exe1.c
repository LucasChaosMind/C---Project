/**1) Ler um n�mero maior ou igual a 0 que representa a quantidade de valores pares que devem ser mostrados.
Apresentar esses valores n por linha, sendo n um n�mero positivo, informado pelo usu�rio. Os valores s�o
apresentados separados por tabula��o.**/
int main ()
{
    int var,lim;
    char c;

    do
    {
        int cont=0 ,aux=0;

        do
        {
            printf("Quantidade de Pares a Ser Mostrada: ");
            scanf("%d",&var);
            if(var<0)
            {
                printf("Valor Invalido!");
            }
        }
        while(var<0);
        do
        {
            printf("Quantidade de Elementos por Linha: ");
            scanf("%d",&lim);
            if(lim<=0)
            {
                printf("Valor Invalido!");
            }
        }
        while(lim<=0);

        for(int i=1; cont<var; i++)
        {
            if(i%2==0)
            {
                if(aux==lim)
                {
                    printf("\n");
                    aux=0;
                }
                printf("%d\t",i);
                aux++;
                cont++;
            }
        }
        printf("\n\nDeseja Continuar S-N? ");
        scanf(" %c",&c);
    }while(c=='S'||c=='s');

    return 0;
}
