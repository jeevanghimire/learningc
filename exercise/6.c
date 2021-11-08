#include <stdio.h>

int main()
{
    int C;

    printf("Enter the value in Celcuis:\n");
    scanf("%d", &C);

    float fahrenhite;

    fahrenhite = (C * (9/5.0f)+32);
     
     printf("The value in fahrenhite is %.2f",fahrenhite);


    return 0;
}
