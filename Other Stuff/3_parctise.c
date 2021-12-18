#include <stdio.h>
#include <math.h>

int main()
{
    int n = 10;
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    int sigh = 1;
    int i;
    float sum= 0.0;
    for (i = 1; i <= n; i++)
    {
        float term = sigh * (i / pow(x,i));
        sum = sum + term;
        sigh = -1*sigh;

         
    }
    printf (" sum is %.03f. \n", sum);

    return 0;
}