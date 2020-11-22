// modify project 5 using Horner's Rule

#include <stdio.h>

int main()
{
    int x;
    printf("Enter an integer for x: ");
    scanf("%d", &x);


    printf("poly: %d\n", 
        (((((3 * x) + 2) *  x - 5) * x - 1) * x + 7) * x - 6);

    return 0;
}