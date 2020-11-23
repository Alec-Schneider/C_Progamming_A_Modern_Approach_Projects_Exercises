// Write a proram that reads an integer entered by the user
// and displays in octal (base 8)

#include <stdio.h>

int main()
{
    int x;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &x);
    
    int l = x % 8;
    x = x / 8;
    int l2 = x % 8;
    x = x / 8;
    int l3 = x % 8;
    x = x / 8;
    int l4 = x % 8;
    x = x / 8;
    int l5 = x % 8;
    printf("%d%d%d%d%d\n", l5, l4, l3, l2, l);

    return 0;
}