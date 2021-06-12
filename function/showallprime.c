// to show the prime number up to the given number
#include <stdio.h>

int is_prime(int);
void prime_numbers_less_than(int);

int main()
{
int num;
printf("Enter the number : %d\n");
scanf("%d", &num);
prime_numbers_less_than(num); 

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
void prime_numbers_less_than(int n)
{
    int i;
    printf("The number less than the given number are:");

    for (i = 2; i < n; i++)
    {
        if (is_prime(i))
        {
            printf("%d  ", i);
        }
    }
    printf("\n");
}