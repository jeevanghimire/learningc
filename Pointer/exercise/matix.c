#include <stdio.h>

int main()
{
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int(*numptr)[8];
    numptr = &num;
    printf("nums = %p\n", num);
    printf("After adding one that goes one number right\n");
    printf("num+1=%p\n", num + 1);
    printf("In PTR\n");
    printf("ptr = %p\n", numptr);
    printf("After adding one in ptr same result comes\n");
    printf("ptr +1=%p1", numptr + 1);

    return 0;
}