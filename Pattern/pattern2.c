#include <stdio.h>
#include <string.h>

int main()
{
    int space;
    char str[100] = "programming";
    int len=strlen(str);
    int i, j;
    for (i = 0; i <= len / 2; i++)
    {
        for (space = 5; space <= i-len-5; space--){
            printf(" ");
        }
        for (j = i; j <= len - i - 1; j++)
        {
            printf("%c ", str[j]);
        }
        printf("\n");
    }
    return 0;
}