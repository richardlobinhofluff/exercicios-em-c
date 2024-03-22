#include <stdio.h>

int main( ) {
    int num;
    int contador =0;

    for(int i = 0; i <=5; i++){
        printf("Diga um numero%d: "  , i + 1);
        scanf("%d" , &num);
    
        if(num >= 10 && num <=150) {
            contador++;

        }



    }
    
    printf("Existem %d numero(s) entre 10 e 150. \n"  , contador);
    return 0;
}