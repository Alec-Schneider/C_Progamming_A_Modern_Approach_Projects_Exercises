#include <stdio.h>

int main(void)
{
    int num, denom;
    int n1, n2;
    int rem;
    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    n1 = num;
    n2 = denom;
    while (n1 != 0){
        printf("%d %d\n", n1, n2);
        rem = n1 % n2;
        n2 = n1;
        n1 = rem;
    }
    num /= n2;
    denom /= n2;

    printf("In lowest terms: %d/%d\n", num, denom);
    return 0;
}