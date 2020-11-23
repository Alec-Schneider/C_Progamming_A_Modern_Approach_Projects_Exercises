#include <stdio.h>

int main()
{
    int i, j;

    i = 1;
    j = 2;

    // a
    printf("%d\n", i += j);     // 3

    // b
    printf("%d\n", i--);        // 3

    // c
    printf("%d\n", i * j / i);  // 2

    //d 
    printf("%d\n", i % ++j);    //2

    return 0;
}