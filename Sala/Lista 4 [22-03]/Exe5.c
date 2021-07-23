/**5) Escreva um programa que leia um número e verifique se ele se encontra fora do intervalo entre 5 e 20.
Mostre uma mensagem se o número está fora desse intervalo.**/

int main(){

    int num;

    printf("Informe um Numero: ");
    scanf("%d",&num);

    if(num>5&&num<20){
        printf("Esta Dentro de Intervalo de 5 a 20!\n");
    }
    else{
        printf("Nao Esta no Entre 5 e 20!\n");
    }

    return 0;
}
