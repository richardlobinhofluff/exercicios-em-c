#include <stdio.h>

int main( ) {
    float numA;
    float numB;
    float numC;

    printf("Diga o número A: ");
    scanf("%f" , &numA);
    printf("Diga o número B: ");
    scanf("%f" , &numB);
    numC = numA;
    numA = numB;
    numB = numC;
    printf("\nO número A agora é: %.2f" , numA);
    printf("\nO número B agora é: %.2f" , numB);


}