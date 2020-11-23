// Only one of the expressions ++i and i++ is exactly
// the same as (i += 1): which is it?
// It is ++i as it changes the value of i before reading 
// the value of the variable.

#include <stdio.h>

int main()
{
    int i;

    i = 1;
    printf("%d\n", ++i); // 2

    i = 1;
    printf("%d\n", i++); // 1
    
    i = 1;
    printf("%d\n", i += 1); // 2

    return 0;
}