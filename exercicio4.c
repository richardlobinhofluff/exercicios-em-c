#include <stdio.h>

int main( ) {
    char nome[100];
    float salario;
    float vendas;
    float adicao;
    float final;

    printf("Diga seu nome: ");
    scanf("%s" , nome);
    printf("Diga o salario: ");
    scanf("%f" , &salario);
    printf("Diga o valor das vendas: ");
    scanf("%f" , &vendas);
    printf("Diga a porcentagem: ");
    scanf("%f" , &adicao);
    final = salario + (vendas * adicao/100);
    printf("%s seu salário final é de: %f", nome,  final);



}