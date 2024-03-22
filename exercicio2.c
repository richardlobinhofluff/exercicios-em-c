#include <stdio.h>
int main( ) {
    int num1;
    int num2;
    int soma;
    int subtracao;
    int mult;
    int divisao;

    printf("Diga o primeiro número: ");
    scanf("%d", &num1);

    printf("Diga o segundo número: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 + num2;
    mult = num1 * num2;
    divisao = num1 / num2; 

    printf("\n O resultado da soma é: %d" , soma);
    printf("\n O resultado da subtração é: %d" , subtracao);
    printf("\n O resultado da multiplicação é: %d" , mult);
    printf("\n O resultado da divisão: %d" , divisao);
}