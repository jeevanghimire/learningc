#include <stdio.h>

int main()
{
    char user_name;
    printf("Enter the user name of your computer:");
    scanf("%c", &user_name);
#if defined(_linux) || (_unix)
    printf("The user path is /home/%c", user_name);
#endif
#ifdef __WIN64
    printf("The user path is C:/Window/user/%c", user_name);
#endif
#ifdef __macOS__
    printf("The user path is/User/%c", user_name);
#endif

    return 0;
}