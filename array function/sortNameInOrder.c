//Sort the n number name in the order in string
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter the number of names you want to sort: ");
    scanf("%d", &n);
    char name[n][20];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the name %d: ", i + 1);
        scanf("%s", name[i]);
    }
    int j;
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                char temp[20];
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    printf("The sorted names are: \n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }
    return 0;
    }
}