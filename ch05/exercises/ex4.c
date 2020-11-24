#include <stdio.h>

int main()
{
    int i, j;

    printf("Enter two integers, seperated by a space: ");
    scanf("%d %d", &i, &j);

    if (i < j) {
        printf("-1\n");
    } else if (i == j) {
        printf("0\n");
    } else {
        printf("1\n");
    }

    return 0;
}