#include <stdio.h>
#include <string.h>

int main()
{
char str[100];
printf("Enter the password  to measure lenght");
scanf("%d", str);
int n = strnlen(str,50);
    printf("The lenght is %d\n",n );
return 0;
}