#include <stdio.h>

int main()
{
    int i, j, k;

    // a 
    i = 3; j = 4; k = 5;
    printf("%d ", i < j || ++j < k); // j never got incremented because i < j was true
    printf("%d %d %d\n", i, j, k);   // 1 3 4 5

    // b
    i = 7; j = 8; k = 9;
    printf("%d ", i - 7 && j++ < k); // right side of && was never evaluated i - 7 was 0
    printf("%d %d %d\n", i, j, k);   // 0 7 8 9

    // c
    i = 7; j = 8; k = 9;
    printf("%d ", (i = j) || (j = k)); // right side never evaluated cause i=j was true
    printf("%d %d %d\n", i, j, k);     // 1 8 8 9

    //
    i = 1; j = 1; k = 1;
    printf("%d ", ++i || ++j && ++k);   // right side of || never evaluated cause i was 2
    printf("%d %d %d\n", i, j, k);      // 1 2 1 1

    return 0;
}