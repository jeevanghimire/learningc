#include <stdio.h>

int main()
{
    int num = 0;

    /*"1,2 ,3,4,5,6,7,8,9,10"*/
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d",num+1);
            num++;
        }
        printf("\n");
    }
    return 0;
}