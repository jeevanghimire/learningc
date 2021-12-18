//determining wheather the given diagonal is rectangular or rombus

#include <stdio.h>
#include <math.h>
int main()
{
    int rect = 0;
    int romb = 0;
    int x, y;
    printf("Enter the adjoint of parallogram:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    int diagonal;
    printf("\nEnter the diagonal of parallogram:\n");
    scanf("%d", &diagonal);

    if (pow(diagonal, 2) == pow(x, 2) + pow(y, 2))
    {
        rect++;
    }
    if (x == y)
    {
        romb++;
    }
    if (rect > 0)
    {
        printf("This is rectangle\n");
    }
    if(romb> 0){
        printf("This is rombous\n");
    }

    return 0;
}