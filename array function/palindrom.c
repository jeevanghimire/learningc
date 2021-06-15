#include <stdio.h>
int str_len(char c[])
{
    int i;

    for (i = 0; c[i] != '\0'; i++)
        ;

    return i;
}
int is_palindrome(char str[])
{
    int i;
    int n = str_len(str);
    for (i = 0; i < n - 1 - i; i++)
    {
        if (str[i] != str[n - 1 - i])
        {
            return 0;
        }
        return 1;
    }
}

int main()
{
    char n[100];
    printf("Enter a string:");
    scanf("%s", n);

    if ((is_palindrome(n)))
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}