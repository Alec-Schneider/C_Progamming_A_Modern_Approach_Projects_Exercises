#include <stdio.h>

int main(void)
{
    float amount, rate, pmt;
    int n;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interst rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &pmt);
    printf("Enter the number of payments to calculate: ");
    scanf("%d", &n);

    rate = rate / 100 / 12;

    for (int i = 1; i <= n; i++){
    amount = (amount * (1.0 + rate) - pmt);
    printf("Balance remaining after payment %d: $%.2f\n", i, amount);
    }


    return 0;
}