#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int LenghtOfPendlum;
    float timePeroid;
    printf("Enter the lenght of pendlum:\n");
    scanf("%d", &LenghtOfPendlum);
    timePeroid = 2 * 3.14 * (sqrt(LenghtOfPendlum / 9.8f));
    printf("The time peroid of pendilum is %.3f", timePeroid);

    return 0;
}