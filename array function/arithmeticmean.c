// to calculate arthemtic mean of an array

#include <stdio.h>
int main()
{
    int a;
    int b;
    int n;
    float m;
    printf("Enter the fist term and last term: ");
    scanf("%d %d", &a, &b);
    printf("Enter the number of term:");
    scanf("%d", &n);
    float d = (b - a) / (n - 1);

    int i;

    for (i = 1; i <= n; i++)
    {
        m = a + d * i;
        printf("the numbers are %f. \n", m);
    }
    

    return 0;
}

