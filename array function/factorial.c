#include <stdio.h>

int function(int n)
{
    int i;
    int result = 1;
    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }

    return result;
}

int main()
{
    int n;
    printf("Enter the number for factorial :");
    scanf("%d", &n);
    function(n);
    printf("The factorial of number %d is %d\n", n,function(n));


    return 0;
}