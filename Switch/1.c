#include <stdio.h>

int main()
{
    int digit;

    printf("Enter the number between 0 to 9\n");
    scanf("%d",&digit);

    switch (digit)
    {
    case 0:
        printf("zero");
        break;
    case 1:
        printf("Onem\n");
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
    case 5:
        printf("Five\n");
        break;
    case 6:
        printf("Six\n");
        break;
    case 7:
        printf("Seven\n");
        break;
    case 8:
        printf("Eight");
        break;
    case 9:
        printf("Nine\n");
        break;

    default:
        printf("Please Enter between 1 to zero\n");   
        break;
    }

    return 0;
}