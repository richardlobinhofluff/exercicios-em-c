#include <stdio.h>

int main( ) {
    float real;
    float dolar;
    float conversao;

    printf("Diga o valor da cotaçao do dolar em reais: ");
    scanf("%f" , &real);
    printf("Diga o valor do dolar: ");
    scanf("%f" , &dolar);
    conversao = dolar* real;
    printf("O valor final é de: %f" , conversao);


}