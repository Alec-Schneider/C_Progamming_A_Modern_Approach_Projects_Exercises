#include <stdio.h>

int main(void)
{
    int n, m; 
    int gcd, rem;

    printf("Enter two integers: ");
    scanf("%d %d", &n, &m);

    if (n == 0) {
        gcd = m;
    } else if (m == 0) {
        gcd = n;
    }

    while (n != 0) {
        rem = m % n;
        m = n;
        n = rem;
    }

    printf("Greatest common denominator is: %d\n", m);

    return 0;
}