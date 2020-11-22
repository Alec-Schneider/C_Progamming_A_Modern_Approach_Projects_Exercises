// Volume of a sphere with a 10-meter radius

#include <stdio.h>


#define PI 3.14159265359
#define VOLUME_RATIO (4.0f / 3.0f)

int main()
{
    int radius = 10;
    float volume;

    volume = VOLUME_RATIO * PI * (radius * radius * radius); 
    printf("Volume of sphere: %.2f\n", volume);

    return 0;
}