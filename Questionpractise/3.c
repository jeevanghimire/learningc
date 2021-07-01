//test passed
#include <stdio.h>


int main()
{
    float n;
    printf("Enter Centimeter to convert into KM and M:");
    scanf("%f", &n);
    double KM;
   double  M;
    KM = n / 100000;
    M = n/1000;
    printf("In M is %lf and KM is %lf",M,KM);

    return 0;
}