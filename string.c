#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "Doing Coding";
    char str2[1000];
    char str3[100]="Hello i am ";
    char str4[100]="doing programming";
    strcat(str3,str4);
    puts(str3);

    strncpy(str2,str,5);
    //str 1 = str 2 
    char str6[100]="helle";
    char str5[100] = "hello";
    printf("The both string is equall by the %d \n",strncmp(str6,str5,4));


    int n = strlen(str);
    printf("The lenght of the word is %d\n", n);
    puts(str2);
    return 0;
}  