#include <stdio.h>
int is_prime(int);

int main()
{
    int n;
    printf("Entewr the number :");
    scanf("%d", &n);

    if (is_prime(n)){
        printf("The number is prime:");
    }
    else{
        printf("The number is not prime number.");
    }
        return 0;
}
int is_prime(int n)
{
    //definitation
    int i;
    for (i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {

            return 0;
        }
    }
    return 1;
}