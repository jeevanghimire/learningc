
//A simple program that i have already builded :)

#include <stdio.h>
#include <math.h>
 int main() 
{
    printf("Enter the value of radius:");
    float radius;
    scanf("%f", &radius);
    float area,premeter;
    area = 22/7*radius*radius;
    premeter =2*22/7*radius;
    printf("The area of circle is %f",area);
    printf("The premeter of circle is %f",premeter);

     return 0;
}