#include <stdio.h>

int main()
{
    int num;
    int sum=0;
    printf("Enter the sequence number for adding: ");
    scanf("%d",&num);
    ;
    int i;

    for (i=1;i<=num;i++){
int term= (i * ( i+ 1) / 2)*10*i;
sum = term + sum;
    }
    printf("The value of sum is %d . \n",sum);
    
    return 0;
}