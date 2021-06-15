#include <stdio.h>
int loop(int a)
{
    int i;
    for (i = a; i >= 1; i--)
    {
        printf("%d ", i);
    }
    return 0;
   
}

int main()
{
    // int a, b, c;
    // printf("Enter the value for a and b :", a, b);
    // scanf("%d %d", &a, &b);
    // printf("The peremeter is :");

    // c = sum_number(a, b);
    // printf("%d",c);
    int n;
    n = loop(10);
    printf("%d", n);

    return 0;
}