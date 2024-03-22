#include <stdio.h>

int main( ) {
    int num;
    printf("diga o numero: ");
    scanf("%d" , &num);

    if(num>10) {
        printf("O número é maior que 10");
    }

    else {
        printf("O numero e menor que 10");
    }
}