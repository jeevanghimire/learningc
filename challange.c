#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;
    char n[] = "*******";
    int len = strlen(n);

    for (i = 0; i <=3; i++)
    {
        for (j = 7; j <= len - i - 1; j++)
        {
            printf("%c", n[j]);
        }
        printf("\n");
    }
    return 0;
}