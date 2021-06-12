#include <stdio.h>

int main()
{
    int n;
    printf("Enter the name ");
    scanf("%d", &n);

    char name[50][100];
    int i, j;
    for (i = 0; i < n; i++)
    {
        scanf("%100s", name[i]);
    }
    for (i = 0; i < 'n-1'; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if ()
            {
                /* code */
            }
            
            
        }
    }

    return 0;
}