#include <stdio.h>

int main( ) {
    char nome[100];
    int idade;

    for(int i = 0; i <=5; i++) {
        printf("Diga seu nome: ");
        scanf("%s" , nome);

        printf("Diga sua idade: ");
        scanf("%d" , &idade);

        if(idade >= 18) {
            printf("Nome:%s" , nome);
            printf("\n É maior de idade ");

        }
        else {
            printf("Nome:%s" , nome);
            printf("\n É menor de idade");

        }


    }
} 