#include <stdio.h>
#define max(x, y) (((x) > (y)) ? (x) : (y))

int main()
{
    int a, b;
    printf("Enter two number:");
    scanf("%d %d", &a, &b);
    int result;
    result = max(a, b);
    if (result == a)
    {
        printf("The greater number is A\n");
    }
    else
    {
        printf("The greater number is B\n");
    }
#ifdef __cplusplus
    printf("This uses C++:");
#endif

#ifndef __cplusplus
    printf("This uses C");
#endif

    return 0;
}