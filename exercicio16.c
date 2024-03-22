#include <stdio.h>

int main( ) {
    char nome[100];
    float nota1;
    float nota2;
    float nota3;
    int divisao;
    float media;
    printf("Digite o nome");
    scanf("%s" , nome );

    printf("Diga a primeira nota: ");
    scanf("%f" , &nota1);

    printf("Diga a segunda nota: ");
    scanf("%f" , &nota2);

    printf("Diga a terceira nota:");
    scanf("%f" , &nota3);

    printf("Diga a quantidade de materias: ");
    scanf("%d" , &divisao);

    media = (nota1 + nota2 + nota3)/ divisao;

    if(media >= 7) {
        printf("Nome:%s" , nome);
        printf("\n Aprovado");

    }
    else if(media =5.1 && 6.9) {
        printf("Nome:%s" , nome);
        printf("\n Recuperaçao");
    }
    else if(media<=5) {
        printf("Nome:%s" , nome);
        printf("\n Reprovado");
    }
    
}