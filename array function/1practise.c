//Entering how many sum want to return in the program;)
#include <stdio.h>

int main()
{
    int a;
    int term = 1;
    printf("Enter how many time you want the sum: ");
    scanf(" %d", &a);
    int sum = 0;
    int i;
    for (i = 1; i <= a; i++)
    {
        sum = sum + term;
        term = term * 10 + 1;
    }
    printf("The sum is %d", sum);
    return 0;
}