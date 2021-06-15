#include <stdio.h>

int finbonachi(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return finbonachi(n - 1) + finbonachi(n - 2);
    }
}

int main()
{
    int n;
    printf("Enter a term for fibbonachi series:\n");
    scanf("%d", &n);
    printf("The fibbonachi of number %d series are:\n", n);
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", finbonachi(i));
    }
    printf("\n");

    return 0;
}