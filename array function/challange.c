#include <stdio.h>
int *maxinum_min(int *a, int *b)
{

  return (*a>*b)?a:b;
}

int main()
{
    int m = 550, n = 100;
    int *p;
    p = maxinum_min(&m, &n);
    printf("maxinum = %d\n", *p);

    return 0;
}