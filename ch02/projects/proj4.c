// Write a program that asks the user to enter a dollars-and-cents
// amount, then display the amount with 5% tax added.

#include <stdio.h>

int main()
{
    float amount;
    printf("Enter a dollars-and-cents amount: ");
    scanf("%f", &amount);

    printf("With tax added: %.2f\n", amount * 1.05f);

    return 0;
}