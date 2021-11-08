#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

    float p, r;
    int n;
    

    printf("Enter the principal amount,rate,number of year\n: ");
    scanf("%f %f %d", &p, &r, &n);

    float simpleIntrest;
    float compoundIntrest;

    simpleIntrest = (p * n * r) / 100;

    compoundIntrest = p * (pow((1 +  r / 100), n) - 1);

    //NOW FINDING DIFFERNCE IN COMPOUND AND SIMPLE INTREST 
        float difference;
       difference = compoundIntrest - simpleIntrest;
        int differasInt = (int)difference;
        printf("The differnce beth compund and simple is %d",differasInt);

    return 0;
}
