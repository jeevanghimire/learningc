#include <stdio.h>

int main()
{
    int i, space, first, second;
    for (i = 1; i <= 4; i++)

    {
        //SPACE KO LAGI

        for (space = 1; space <= 4 - i; space++)
        {
            printf("  ");
        }
        //number ko first half ko lagi

        for (first = i; first <= 2 * i - 1; first++)
        {
            printf("%d ", first);
        }
        //second half ko lagi

        for (second = 2 * i - 2; second >= i; space--)
        {
            printf("%d ", second);
        }
        printf("\n");
    }
    return 0;
}