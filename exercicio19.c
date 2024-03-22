#include <stdio.h>

int main( ) {
    char nome[100];
    char sexo[100];
    int homem = 0;
    int mulher = 0;

    for(int i = 0; i <=5; i++) {
        printf("Diga seu nome %d: ", i + 1);
        scanf("%s" , nome);

        printf("Diga seu sexo: %d: ", i + 1);
        scanf("%s" , sexo);
        if(sexo == "H" ){
            homem++;
        }
        else if(sexo == "F"){
            mulher++;
        }
        }
        printf("O total de homens é: %d" , homem);
        printf("O total de mulher é: %d" , mulher);

        return 0;

}
