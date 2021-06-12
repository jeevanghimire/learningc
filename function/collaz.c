#include <stdio.h>
int prime_odd(int n)
{
    return n % 2 == 1;
}

void check(int n)
{
    while(n != 1)
    {
        printf("%d ", n);
        //checking the number is even or odd

        if (prime_odd(n))
        {

            n = 3 * n + 1;
        }
        else
        {
            n = n / 2;
        }
    }
    printf("%d",1);
}
int main()
{
    int num;
    printf("Enter the number for the collaze number:");
    scanf("%d", &num);
    check(num);

    return 0;
}
