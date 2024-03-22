#include <stdio.h>

int main( ) {
    float custo;
    float percentagem;
    float porcento;
    float venda;

    printf("Diga o custo: ");
    scanf("%f" , &custo);
    printf("Diga a porcentagem de lucro desejada: ");
    scanf("%f" , &percentagem);

    porcento = (custo * percentagem )/ 100;
    venda = custo + porcento;
    printf("O valor final é: %f" , venda);

}