#include <stdio.h>

int main(void)
{
    int days, start;

    printf("Enter number of days in the month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sunday, 7=Saturday): ");
    scanf("%d", &start);

    for (int i = 1, j = 1; i <= days; i++, j++){
        if (i == 1){
            for (; j < start; j++){
                printf("   ");
            }
        }

        printf("%2d", i);
        printf(" ");
        if ((j % 7) == 0){
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}