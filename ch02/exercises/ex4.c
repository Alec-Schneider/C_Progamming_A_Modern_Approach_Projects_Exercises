// write a program that declares several int and float
// variables - without initializing them - and print
// their values. See if there is a pattern.


// Program won't compile due to unitialized variables

#include <stdio.h>

int main()
{
    int x, y, z;
    float f, g, h;

    printf("%d, %d, %d", x, y, z);
    printf("%f, %f, %f", f, g, h);
    return 0;
}