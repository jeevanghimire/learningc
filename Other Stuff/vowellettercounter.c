//for counting the vowel letter given by user in the program
#include <stdio.h>
#include <string.h>
int main()
{
    char letter[100];
    fgets(letter, 100, stdin);
    int i;
    int n = 0;
    for (i = 0; letter[i] != '\0'; i++)

    {
        if (letter[i] ==  'a' || letter[i] == 'A' || letter[i] == 'e' || letter[i] == 'E' || letter[i] == 'i' || letter == 'I' || letter == 'o' || letter == 'O' || letter == 'u' || letter == 'U')

        {
            n++;
        }
    }
    printf("The number of vowel letter is %d\n", n);

    return 0;
}