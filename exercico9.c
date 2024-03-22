#include <stdio.h>

int main( ) {
    float valor;
    float rendendo;
    float valor_final;

    printf("Diga o valor: ");
    scanf("%f" , &valor);
    rendendo = valor * 0.70;
    valor_final = valor + rendendo;
    printf("O valor total é: %f" , valor_final);
}