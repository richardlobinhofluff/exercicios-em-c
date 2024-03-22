#include <stdio.h>

int main( ) {
    int num1;
    int num2;
    int soma;

    printf("Diga um número: ");
    scanf("%d", &num1);

    printf("Diga o segundo número: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    printf(" o resultado da soma: %d", soma );
}
