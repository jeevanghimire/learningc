//failed
//always failed this  


#include <stdio.h>
#include <string.h>

int replace(int *n)
{
    int len;
    len = strlen(n);
    int i;
    for (i = 0; i < len; i++)
    {
        if (n[i] == '0')
        
            n[i] = '5';
        else

        
        printf("\n");
    }
    return i;
}

int main()
{
    int number[100];
    printf("Enter some numbers:");
    scanf("%s", number);

    printf("%d", replace(number));

    return 0;
}