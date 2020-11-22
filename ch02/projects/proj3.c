// Volume of a sphere, but prompt the user for radius

#include <stdio.h>


#define PI 3.14159265359
#define VOLUME_RATIO (4.0f / 3.0f)

int main()
{
    int radius;
    printf("Enter the radius of the sphere: ");
    scanf("%d", &radius);

    float volume;
    volume = VOLUME_RATIO * PI * (radius * radius * radius); 
    printf("Volume of sphere: %.2f\n", volume);

    return 0;
}