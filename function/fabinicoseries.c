#include <stdio.h>

void print_fabonacco(int n)
{
    //checking the number for fabbonacci series
    printf("The fibonacchi series are :");
    int i, a = 0, b = 1;
    for (i = 0; i < n; i++)
    {
        //programming the fabonacci series
        printf("%ld ", a);
        int c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int num; 
    printf("Enter the number for fibonacchi series:");
    scanf("%d", &num);
    print_fabonacco(num);

    return 0;
}