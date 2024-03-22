#include <stdio.h>

int main( ) {
    float custo_fabrica;
    int porcento_distribuidor;
    int porcento_imposto;
    float valor_distribuidor;
    float valor_imposto;
    float valor_consumidor;

    printf("Diga o valor de fábrica: ");
    scanf("%f" , &custo_fabrica);
    printf("Diga a porcentagem do distribuidor:");
    scanf("%f" , &porcento_distribuidor);
    printf("Diga a porcentagem do impostos: ");
    scanf("%f" , &porcento_imposto);
    valor_distribuidor = (custo_fabrica * porcento_distribuidor)/100;
    valor_imposto = (custo_fabrica * porcento_imposto)/100;
    valor_consumidor = custo_fabrica + valor_distribuidor + valor_imposto;
    printf("O valor final para o consumidor:%f " , valor_consumidor );
}