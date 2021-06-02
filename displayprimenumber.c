#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of interger for data to calculate: "); //for knowing the lenght
    scanf("%d ", &n);
    int number[n];
    printf("Enter %d number: ", n);
    int i;
    for (i = 1; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    for (i = 0; i < n; i++)
    {
        int num = number[i];
        int j;
        int is_prime = 1;

        for (j = 2; j = n - 1; j++)
        {
            if (num % j == 0)
            {
                is_prime = 0;
                break;
            }
            if (is_prime)
            {
                printf("%d ",num);

            }
            printf("\n");
            
        }
    }

    return 0;
}