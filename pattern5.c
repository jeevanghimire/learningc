#include <stdio.h>

int main()
{
    int space;
    int i, j;
    int num = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            for (space = 1; space <=6 - i; space++)
            {
                printf(" ");
            }
            if ( i== 1 || j == 1)
            {
                num = 1;
            }
            else
            {
                num = num * (i - j + 1) / (j - 1);
            }
            printf("%d  ", num);
        }
        printf("\n");
    }
    return 0;
}