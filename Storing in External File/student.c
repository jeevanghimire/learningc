
#include <stdio.h>
int main()
{
    char n[10], d[10];
    int a, b;
    FILE *fptr;
    fptr = fopen(“patient.txt”,”w”);
    printf("Enter name, disease, age and bed number");
    scanf(“%s %s %d %d”, n, d, &a, &b);
    fprintf(fptr,"%s %s %d %d\n", n, d, a, b);
    fclose(fptr);
    return 0;
}