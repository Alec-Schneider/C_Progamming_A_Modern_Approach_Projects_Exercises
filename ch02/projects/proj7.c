// Ask the user for a dollar amount and 
// output the smallest number of $20, $20, 
// $5, adn $1 bills.

#include <stdio.h>


int main()
{
    int dollars;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);

    int twenties = dollars / 20;
    dollars = dollars - (twenties * 20);
    int tens = dollars / 10;
    dollars = dollars - (tens * 10);
    int fives = dollars / 5;
    dollars = dollars - (fives * 5);
    int ones = dollars / 1;

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf(" $5 bills: %d\n", fives);
    printf(" $1 bills: %d\n", ones);

    return 0;
}