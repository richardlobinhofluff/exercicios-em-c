#include <stdio.h>

int main( ) {
    float distancia;
    float combustivel;
    float media;

    printf("Diga a distancia:");
    scanf("%f" , &distancia);

    printf("Diga o combustivel:");
    scanf("%f" , &combustivel);

    media = distancia / combustivel;
    printf("A média é de: %f" , media);
}