#include <stdio.h>

int main()
{

    int n;
    printf("Enter the  size in real number : ");

    scanf("%d", &n);

    float number[n];

    int i, j;

    printf("Enter %d numbers for array:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &number[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        //sorting number
        for (j = 0; j < n - 1 - i; j++)
        {
            //also surting by just using buble algorithms
            if (number[j] < number[j + 1])
            {

                float temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }
    printf("The array are:");

    for (i = 0; i < n; i++)
    {

        printf("%.3f ", number[i]);
    }
    printf("\n");
    return 0;
}