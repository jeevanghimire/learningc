// most fun to do
//calculate the equation of Quardic when a,b and c cofficient are given number

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float x1, x2;
    printf("Enter the value of a,b and c for the equation\n");
    scanf("%f %f %f", &a, &b, &c);
    int discriminant;

    discriminant = b * b - 4 * a * c;

    if (discriminant >= 0)
    {
        x1 = (-1 * b + sqrt(discriminant)) / (2 * a);
        x2 = (-1 * b - sqrt(discriminant)) / (2 * a);

        printf("The root are:%.3f and %.33f", x1, x2);
    }
    else
    {
        printf("This type of equation don't have real number");
    }

    return 0;
}