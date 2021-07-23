/**12) Calcule e mostre a média de idade de três pessoas**/
#include <stdio.h>

int main (){
    int x,y,z;
    double vtotal;

    printf("Informe sua idade X: ");
    scanf("%d",&x);
    printf("Informe sua idade Y: ");
    scanf("%d",&y);
    printf("Informe sua idade Z: ");
    scanf("%d",&z);
    vtotal=((double)(x+y+z))/3;
    printf("Media Calculada: %.2lf",vtotal);

}
