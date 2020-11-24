#include <stdio.h>

int main()
{
    int n = -9;
    // If the following if legal? Yes
    // When n = 5 the message is not printed
    if (n == 1 - 10){
        printf("n is between 1 and 10\n");
    }

    return 0;
}