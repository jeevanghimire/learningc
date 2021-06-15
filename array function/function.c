#include <stdio.h>

void print_fabinicco(int n)
{
    int a = 0;
    int b = 1;
    int i;
    for ( i = 0; i < n; i++)
    {
        //initilizing fabinicco series 
        printf("%d ",a);
        int c = a + b;
        a =b;
        b = c;

    }
    
}

int main()
{
    int n;
    printf("Enter the value for n: ");
    scanf("%d", &n);
     print_fabinicco (n);

    return 0;
}