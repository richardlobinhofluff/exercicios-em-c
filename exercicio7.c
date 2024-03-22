#include <stdio.h>

int main( ) {
    float temC;
    float temF;
    printf("Diga a temperatura em Celsius: ");
    scanf("%f" , &temC);
    temF= (9*temC + 160)/5;
    printf("A temperatura em Fahrenheit: %f" , temF);
}