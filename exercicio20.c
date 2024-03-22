#include <stdio.h>

int main( ) {
        float valor_veiculo;
        int ano;
        float valor_desconto;

        printf("Diga o valor do veiculo:");
        scanf("%f" , &valor_veiculo);

        printf("Diga o ano do carro: ");
        scanf("%d" , &ano);

        if(ano <=2000  ){
        valor_desconto = valor_veiculo - (valor_veiculo * 12) /100;
        printf("O valor do veiculo: %f" , valor_veiculo);
        printf("\n O seu valor de desconto é: %f" , valor_desconto);
}
else if(ano>2000 ) {
        valor_desconto = valor_veiculo -  (valor_veiculo *7) /100;
        printf("O valor do veiculo: %f" , valor_veiculo);
        printf("O valor de desconto:%f" , valor_desconto);
}
 return 0 ;
}