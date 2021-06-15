#include <stdio.h>
#include <string.h >

int main()
{

    char caps[] = "JEEVAN";
    char small[] = "jeevan";
    int i, j;
    int n = strlen(caps);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                printf("%c", caps[j]);
            }
            else
            {
                if (j % 2 == 0)
                {
                    printf("%c",caps[j]);
                }
                else{
                    printf("%c",small[j]);
                }
            }
        }
        printf("\n");
    }

    return 0;
}