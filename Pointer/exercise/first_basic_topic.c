#include <stdio.h>

int size(char *str)
{
    int count = 0;
    for (count = 0; *(str + count) != '\0'; count++);
    return count;
}

int main()
{
    int num[] = {0, 1, 2, 3, 4, 5};
    printf("number = %d\n", num);
    printf("num = %d\n", &num[0]);
    printf("num = %d\n", *num);
    printf("num = %d\n", *(num + 2));
    int i;
    for (i = 0; i < (int)(sizeof(num) / sizeof(num[0])); i++)
    {
        printf("%d", *(num + i));

        char str[100];
        printf("Enter the character to measure the lenght\n");
        scanf("%s", str);
        printf("The lenght of character is %d\n", size(str));

        return 0;
        }

}