#include <stdio.h>
int *maxinum_min(int *a, int *b)
{

    (a > b) ? &a : &b;
}

int main()
{
    int m = 55, n = 100;
    int *p;
    p = maxinum_min(&m, &n);
    printf("maxinum = %d\n", *p);

    return 0;
}