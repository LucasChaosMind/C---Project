/**6) Uma pessoa resolveu fazer uma aplica��o em uma poupan�a programada1
. Para calcular seu rendimento,
ela dever� fornecer o valor constante da aplica��o mensal, a taxa de juros (%) e o prazo da aplica��o (em
meses). Sabendo-se que a f�rmula usada para este c�lculo �:**/
#include <stdio.h>
#include <math.h>
int main (){

    double vm, taxa, n, aux;

    printf("Informe o Valor da Aplicacao: ");
    scanf("%lf",&vm);
    printf("Informe o Valor do Rendimento[De 0 a 1]: ");
    scanf("%lf",&taxa);
    printf("Informe o Numero de Meses: ");
    scanf("%lf",&n);

    aux= (vm*(pow((1+taxa),n)-1))/taxa;

    printf("O Valor Final: R$ %.2lf",aux);

    return 0;
}
