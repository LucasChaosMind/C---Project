/**1) Ler um n�mero double. Separar a parte inteira e a parte decimal desse n�mero. Apresentar a parte decimal
como um valor double e como um inteiro de tr�s d�gitos. Da parte inteira separar o n�mero que representa
unidade, dezena e centena e mostrar.**/

 #include <stdio.h>

 int main (){

    double num,aux=0;

    printf("Infoeme um Valor Double: ");
    scanf("%lf",&num);

    printf("Numero Informado: %lf",num);
    printf("\nParte inteira: %d",(int)num);
    printf("\nParte Decimal %lf",num-(int)num);
    printf("\nParte Decimal Como Tres de Tres Digitos %d",(int)((num-(int)num)*1000));
    printf("\n\nCentena(s): %d",(int)num/100);
    printf("\nDezena(s): %d",(int)(num/10)%10);
    printf("\nUnidade(s): %d",(int)num%10);

    return 0;
 }
