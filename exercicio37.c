#include <stdio.h>

int main( ) {
        char nome[100];
        int sexo;
        float altura;
        int idade;
        float peso_ideal;

        printf("Digite o nome:");
        scanf("%s" , nome);

        printf("diga se e homem(1) ou  mulher(2): ");
        scanf("%d" , &sexo);

        printf("Digite a altura: ");
        scanf("%f" , &altura);

        printf("Digite idade: ");
        scanf("%d" , &idade);

        if(sexo== 1 && altura >1.70){
                
                if(idade<=20){
                peso_ideal = (72.7 *altura) - 58;}
                
                if(idade <= 21 && idade <=39){
                peso_ideal = (72.7 * altura) - 53;}

                if(idade >=40){
                peso_ideal = (62.1 * altura) - 45;}


        }
        else if (sexo == 2){
                if(idade>=35);
                peso_ideal = (62.1 * altura)- 45;
                if(idade<35);
                peso_ideal = (62.1* altura)- 49;

        }
        else{
                printf("Invalido\n");

        }
        printf("Nome:%s" , nome);
        printf("Peso ideal: %.2f" , peso_ideal);
}