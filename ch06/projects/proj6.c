#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2, j = i * i; j <= n; i += 2, j = i * i){
        printf("%d\n", j);
    }
    return 0;
}