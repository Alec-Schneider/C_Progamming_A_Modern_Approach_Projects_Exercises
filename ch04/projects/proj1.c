// Write a program that asks the user to enter a two-digit
// number, then prints the number with its digits reversed

#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &x, &y);
    printf("The reversal is: %d%d\n", y, x);

    return 0;
}