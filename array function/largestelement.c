#include <stdio.h>
int largest(int x[], int n)
{
    int max = x[0];
    int i;
    for (i = 0; i < n; i++)
    {
        if (x[i] > max)
        {
            max = x[i];
        }
    }
    return max;
}

int main()
{
    int number[] = {1, 123, 254, 55};
    int  size =(int)(sizeof(number)/sizeof(number[0]));
    
   int max =  largest(number, size);
    printf("largest number is %d", max);

    return 0;
}