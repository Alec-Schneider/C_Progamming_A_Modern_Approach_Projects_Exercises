#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    num = abs(num);

    int digits;
    if (num < 10){
        digits = 1;
    } else if (num < 100){
        digits = 2;
    } else if (num < 1000){
        digits = 3;
    } else if (num < 10000){
        digits = 4;
    } else if (num < 100000){
        digits = 5;
    }

    printf("The number %d has %d digits\n", num, digits);


    return 0;
}