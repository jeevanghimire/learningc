#include <stdio.h>
#include <string.h>

int main()
{
    char palindrome[100];
    fgets(palindrome, 100, stdin);
    int i;
    int ispalindrome = 1;
    int n = strlen(palindrome);
    for (i = 0; i < n; i++)

    {

        if (palindrome[i] != palindrome[n - 1 - i])
        {

            ispalindrome = 0;
            break;
        }
    }
    if (palindrome)
    {
        printf("The gien word is palindrome \n");
         
}else{
    printf("The gien word is not palindrome");
    
}
    

    return 0;
}
