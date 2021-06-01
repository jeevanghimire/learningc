#include <stdio.h>

int main()
{
    float num, average, sum = 0;
    int count = 0;
    do
    {
        printf("Enter the number: ");
        scanf("%f", &num);

        if (num == 0)
        {
            break;
        }
        sum = num + sum;
        count = count + 1;

    } while (1);
    average = sum / count;
printf("the sum is %0.3f and average is %0.3f",sum,average);

    return 0;
}