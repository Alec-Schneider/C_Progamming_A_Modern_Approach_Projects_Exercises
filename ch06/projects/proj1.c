#include <stdio.h>

int main(void)
{
    float num, max = 0.0f;

    while (1) {
        printf("Enter a number: ");
        scanf("%f", &num);
        if (num == 0){
            break;
        } else {
            if (num > max) {
                max = num;
            }
        }
    }
    printf("The largest number entered was %f\n", max);

    return 0;
}