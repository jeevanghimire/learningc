#include <stdio.h>

int main(void)
{
    // n is number of rows
    int n = 4;

    int i, j, k;

    // loop for each row
    for (i = n; i >= 1; i--)
    {
        // print space
        for (j = n; j > i+1; j--)
            printf(" ");

        // print '*'
        for (k = 1; k < (i * 2); k++)
            printf("*");

        // move to the next line
        printf("\n");
    }

    return 0;
}