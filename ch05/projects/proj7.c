#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, max, min;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    max = num1;
    min = num1;

    if (num2 > max){
        max = num2;
    } else if (num3 > max) {
        max = num3;
    } else if (num4 > max) {
        max = num4;
    }

    if (num2 < min){
        min = num2;
    } else if (num3 < min) {
        min = num3;
    } else if (num4 < min) {
        min = num4;
    }

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);

    return 0;
}