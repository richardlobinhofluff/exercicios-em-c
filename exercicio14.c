#include <stdio.h>

int main( ) {
    float num;
    float num2;
    printf("diga o numero: ");
    scanf("%f" , &num);
    printf("diga o numero: ");
    scanf("%f" , &num2);
    
    if(num> num2) {
        printf("O número é maior:%f" , num);
    }

    else {
        printf("O numero e maior:%f" , num2);
    }
}