/**6) Uma pessoa resolveu fazer uma aplicação em uma poupança programada1
. Para calcular seu rendimento,
ela deverá fornecer o valor constante da aplicação mensal, a taxa de juros (%) e o prazo da aplicação (em
meses). Sabendo-se que a fórmula usada para este cálculo é:**/
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
