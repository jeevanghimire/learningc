#include <stdio.h>
int *maxinum_min(int *a, int *b)
{
 (*a) > (*b) ?? return a,  return b;
}

int main()
{
int m = 55 , n = 100;
int *p;
p = maxinum_min(&m, &n);
printf("maxium = %d\n", m);


    return 0;
}