#include <stdio.h>

int main()
{
    int age = 12;
    printf("%d", (age < 13) || (age > 19) ? 0 : 1);

    return 0;

}