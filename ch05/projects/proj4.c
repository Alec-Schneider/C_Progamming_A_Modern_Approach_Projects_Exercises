#include <stdio.h>

int main()
{
    
    int speed;
    printf("Ente the wind speed (in knots): ");
    scanf("%d", &speed);

    if (speed < 1) {
        printf("Wind description: Calm\n");
    } else if (speed < 4) {
        printf("Wind description: Light air\n");
    } else if (speed < 28) {
        printf("Wind description: Breeze\n");
    } else if (speed < 48){
        printf("Wind description: Gale\n");
    } else if (speed < 64){
        printf("Wind description: Storm\n");
    } else {
        printf("Wind description: Hurricane\n");
    }

    return 0;
}