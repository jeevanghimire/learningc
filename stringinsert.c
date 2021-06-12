#include <stdio.h>
#include <string.h>
int main()
{
    char stringInsert[1000];
    int insertPlace;

    char result[2000];
    char containerString[1000];
    printf("Enter the conainer string for the program: ");
    fgets(containerString, 1000, stdin);

    printf("Enter the string for insert: ");
    fgets(stringInsert, 1000, stdin);
    printf("Enter the position for insertion the container:");
    scanf("%d", &insertPlace);

    int i, j, k = 0;

    for (i = 0; i < insertPlace; i++, k++)
    {
        result[k] = containerString[i];
    }
    for (j = 0; stringInsert[j] != '\0'; j++)
    {

        result[k] = stringInsert[j];
        k++;
    }

    for (i = insertPlace; containerString[i] != '\0'; i++)
    {
        result[k] = containerString[i];
        k++;
    }
    result[k] = '\0';
    printf("The inserted form of the given value is: ");
    puts(result);

    return 0;
}