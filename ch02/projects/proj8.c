// Calculate the remaining balance on a loan after the first, second, and third monthly
// payments.

#include <stdio.h>

int main()
{
    float amount, rate, pmt;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interst rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &pmt);

    rate = rate / 100 / 12;
    amount = (amount * (1.0 + rate) - pmt);
    printf("Balance remaining after first payment: $%.2f\n", amount);
    amount = (amount * (1.0 + rate) - pmt);
    printf("Balance remaining after second payment: $%.2f\n", amount);
    amount = (amount * (1.0 + rate) - pmt);
    printf("Balance remaining after third payment: $%.2f\n", amount);
    
    return 0;
}