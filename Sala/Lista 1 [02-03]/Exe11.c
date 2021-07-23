  /**11) O que faz o algoritmo a seguir representado em fluxograma? Implemente-o utilizando a linguagem C.**/

  #include <stdio.h>

  int main (){
    double salario, vtotal,reajuste;

    printf("Informe o salario Atual: ");
    scanf("%lf",&salario);
    printf("Informe o Valor de Reajuste: ");
    scanf("%lf",&reajuste);

    vtotal= salario+ (salario*reajuste/100);

    printf("Slario Calculado: %.2lf",vtotal);

    return 0;
  }
