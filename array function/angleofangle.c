#include <stdio.h>

double power(float x, int n)
{
    int i;
    double product = 1;
    for (i = 0; i < n; i++)

    {
        product = product * x;

    }
    return product;
}
int function(int n)
{
    int i;
    int result = 1;
    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }

    return result;
}
double Sine(double x, int n){
    int i;
    int sign = 1 ;
    double sum = 0.0;
    for (i = 1 ; i <= n; i++){
            double term = sign * (power(x,2*i-1))/function(2*i-1);
            sign = sign * -1;
            sum = term +sum;

 
    }
    return sum;
}
double cose(double x, int n)
{
    int i;
    int sign = 1;
    double sum = 0.0;
    for (i = 1; i <= n; i++)
    {
        double term = sign * (power(x,2*(i-1))) / function(2 * (i - 1));
        sign = sign * -1;
        sum = term + sum;
    }
    return sum;
}
int main()
{
    int n;
    double x;
    printf("Enter the term for the calculation of x and n:");
    scanf("%lf %d", &x,&n);
    printf("The value of %lf sign is %.03lf \n ", x, Sine(x, n));
    printf("The value of %lf cose is %.03lf ", x, cose(x, n));

    return 0;
}