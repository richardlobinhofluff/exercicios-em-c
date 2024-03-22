#include <stdio.h>

int main( ) {
    int num;
    printf("Diga um numero: ");
    scanf("%d" , &num);
    if(100 < num && num <200) {
        printf("O numero está entre 100 e 200");
    }
    else if(num>200) {
        printf("O numero e invalido");
    }
    else{
        printf("O numero nao faz parte");
    }
}