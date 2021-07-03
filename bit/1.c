#include <stdio.h>
//swap number using bitwise operators
int main()
{
    int a = 3;
    int b = 4;
    printf("before swap\n");

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swap\n");
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

    return 0;
}