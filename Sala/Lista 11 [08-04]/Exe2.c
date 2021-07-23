/**2) Uma pessoa aplicou R$ 1000,00 com rendimento de 5% ao mês. Quantos meses serão necessários para que o capital investido
ultrapasse R$ 1200,00**/
#include <stdio.h>

int main (){

    int i;
    double var=1000;

    for(i=0;var<1200;i++){
        var*=1.05;
    }
    printf("Valor Final %.2lf",var);
    printf("\n\nSerao Necessarios %d Meses para que o Capital Investido Ultrapassae 1200!",i);

    return 0;
}
