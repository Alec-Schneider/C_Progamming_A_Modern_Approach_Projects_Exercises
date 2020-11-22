// Condense the dweigt.c program by only declaring the 
// height, length, and width variables

#include <stdio.h>
// use macro definition to create a constant
#define INCHES_PER_POUND 166

int main()
{
    int height = 8, length = 12, width = 10, volume;

    volume = length * width * height;

    printf("Dimensions %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", 
        (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND);
        
    return 0;
}