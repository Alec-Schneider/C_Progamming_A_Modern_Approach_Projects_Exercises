// This technique does not work because subtracting
// by 1 at first changes the rounding when 
// calculating the remainder.

#include <stdio.h>

int main()
{
    int total;
    total = 23;
    printf("%d\n", (total - 1) % 10 - 9);
    printf("%d\n", total % 10 - 10);

    return 0;
}