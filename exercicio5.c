#include <stdio.h>

int main( ) {
    char nome[100];
    float nota1;
    float nota2;
    float nota3;
    float media; 

    printf("Diga seu nome: ");
    scanf("%s" , nome);
    printf("Digite a primeira nota: ");
    scanf("%f" , &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f" , &nota2);
    printf("Diga a terceira: ");
    scanf("%f" , & nota3);
    media =  (nota1 + nota2 + nota3)/3;
    printf("%s sua nota é de: %f", nome, media);

}