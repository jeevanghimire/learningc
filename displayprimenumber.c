#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of interger for data to calculate: "); //for knowing the lenght
<<<<<<< HEAD
    scanf("%d", &n);
    int number[n];
    printf("Enter %d number: ", n);
    int i;
    for (i = 0; i < n; i++)
=======
    scanf("%d ", &n);
    int number[n];
    printf("Enter %d number: ", n);
    int i;
    for (i = 1; i < n; i++)
>>>>>>> a4dc109a63a0661d2474fea2b1afdc79320da4d8
    {
        scanf("%d", &number[i]);
    }
    for (i = 0; i < n; i++)
    {
        int num = number[i];
<<<<<<< HEAD
        //checking if num is prim or not for program
        int j;

        int is_prime = 1;

        for (j = 2; j <= num - 1; j++)
=======
        int j;
        int is_prime = 1;

        for (j = 2; j = n - 1; j++)
>>>>>>> a4dc109a63a0661d2474fea2b1afdc79320da4d8
        {
            if (num % j == 0)
            {
                is_prime = 0;
                break;
            }
<<<<<<< HEAD
        }
        if (is_prime)
        {
            printf(" The prime number is %d. ", num);
=======
            if (is_prime)
            {
                printf("%d ",num);

            }
            printf("\n");
            
>>>>>>> a4dc109a63a0661d2474fea2b1afdc79320da4d8
        }
    }

    return 0;
}