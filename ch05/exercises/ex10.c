#include <stdio.h>

int main()
{
    int i;

    i = 1;
    // prints one and two, since there is no break
    switch (i % 3) {
        case 0: printf("zero\n");
        case 1: printf("one\n");
        case 2: printf("two\n");
    }

    return 0;
}