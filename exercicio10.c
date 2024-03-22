#include <stdio.h>

int main( ) {
    float valor;
    int prestacao;
    float valor_final;
    printf("Diga o valor total da compra: ");
    scanf("%f" , &valor);
    printf("Diga o valor da prestaçao");
    scanf("%d" , &prestacao);
    valor_final = valor/prestacao;
    printf("O valor da prestaçao e: %f" , valor_final);
}