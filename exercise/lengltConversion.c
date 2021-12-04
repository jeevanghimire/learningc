#include <stdio.h>

int main()
{
    // taking input from user
    int lengthInCentimeters;
    printf("Enter the length in centimeters: ");
    scanf("%d", &lengthInCentimeters);
    // converting the input to into requres form of input

    printf("Which form of ouptut do you want?\n");
    printf("1. In meters\n");
    printf("2. In km\n");
    float km, meters;
    int choice;

    scanf("%d", &choice);
    // switching the case for conversion

    switch (choice)
    {
    case 1:
        meters = (float)lengthInCentimeters / 100;
        printf("%d cm is %f m\n", lengthInCentimeters, meters);
        break;
    case 2:
        km = (float)lengthInCentimeters / 100000;
        printf("%d cm is %f km\n", lengthInCentimeters, km);
        break;
    default:
        printf("Invalid choice\n");
    }
    // output
    printf("Thankyou\n");
    // running the program
    //done
    

    return 0;
}