// Write a program that asks the user to enter a three-digit
// number, then prints the number with its digits reversed

#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &x, &y, &z);
    printf("The reversal is: %d%d%d\n", z, y, x);

    return 0;
}