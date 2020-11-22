#include <stdio.h>

int main()
{
    int x;
    printf("Enter an integer for x: ");
    scanf("%d", &x);


    printf("poly: %d\n", 
        (3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x ) + (7 * x) - 6);

    return 0;
}