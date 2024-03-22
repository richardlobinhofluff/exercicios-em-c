#include <stdio.h>

int main( ) {
    char nome[100];
    int numero_matricula;
    float laboratorio;
    float avaliacao;
    float exame;
    float peso_laboratorio;
    float peso_avaliacao;
    float peso_exame;
    float nota_final;
    char classificacao;

   printf("Diga o nome: ");
   scanf("%s" , nome);
   printf("Diga o numero da matricula: ");
   scanf("%d" , &numero_matricula);
    printf("Diga sua nota de laboratorio: ");
    scanf("%f" , &laboratorio);
   
    printf("Diga sua nota de avaliaçao: ");
    scanf("%f" , &avaliacao);
    
    printf("Diga sua nota de exame final: ");
    scanf("%f" , &exame);

    printf("Diga o peso do laboratorio:");
    scanf("%f" , &peso_laboratorio);

    printf("Diga o peso de  avaliaçao: ");
    scanf("%f" , &peso_avaliacao);

    printf("Diga o peso do exame final: ");
    scanf("%f" , &peso_exame);

    nota_final = (laboratorio + avaliacao + exame)/ (peso_laboratorio + peso_avaliacao + peso_exame);

    if(nota_final>=8 && nota_final<=10){
        classificacao = 'A';

        printf("Nome:%s"  , nome);
        printf("\nNota final: %f" , nota_final);
        printf("Sua classificação: %s" , classificacao);

    }

    else if(nota_final>=7 && nota_final <=8){
         classificacao = 'B';

        printf("Nome:%s"  , nome);
        printf("\nNota final: %f" , nota_final);
        printf("Sua classificação: %s" , classificacao);

    }
    else if(nota_final>=6 && nota_final <=7) {
        classificacao = 'C';

        printf("Nome:%s"  , nome);
        printf("\nNota final: %f" , nota_final);
        printf("Sua classificação: %s" , classificacao); 
    }
    else if(nota_final>=5 && nota_final <=6) {
         classificacao = 'D';

        printf("Nome:%s"  , nome);
        printf("\nNota final: %f" , nota_final);
        printf("Sua classificação: %s" , classificacao);
    }
    else if(nota_final = 0 && nota_final >=5) {
        classificacao = 'R';

        printf("Nome:%s"  , nome);
        printf("\nNota final: %f" , nota_final);
        printf("Sua classificação: %s" , classificacao); 
    }
    else {
        printf("Meu nome é irineu e voce se fudeu");
    }







}