//Also failed

#include <stdio.h>

#include <string.h>
#define newline printf("\n");
int main()
{
    int n[100];
    int result[100];
    printf("Enter the number for swap:");
    scanf("%s", n);
    int i, j, k;
    for (i = 0; i < n['\0']; i++)
    {
        for (j = '\0'; j <= i; j--)
        {
            int temp[100] = n[i];
            n[i] = n[j];
            n[j] = temp[i];
            result[k] = temp[i];
            printf("%d\n", result[k]);
        }

        newline
    }

    return 0;
}