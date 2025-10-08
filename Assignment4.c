#include <stdio.h>

int main()
{
    // variable declaration
    float celsius, fahrenheit;
    int choice;

    // desplay from user choice
    printf("Temperature converter\n");
    printf("1. celsius to fahrenheit\n");
    printf("2.Fahrenheit To Celsius\n");
    printf("Enter Your choice (1 or 2): ");
    scanf("%d", &choice);

    // performing conversion based on user choice
    if (choice == 1)
    {
        // Celsius To Fahrenheit conversion

        printf("\nEnter Temperature In Celsius: ");
        scanf("%f", &celsius);

        fahrenheit = (celsius * 9 / 5) + 32;
        printf("In Fahrenheit: %.1f\n", fahrenheit);
    }
    else if (choice == 2)
    {
        // Fahrenheit to Celsius Conversion
        printf("In Celsius: 1f\n", celsius);
    }
    else
    {
        printf("Invalid Choice! Please Enter 1 or 2.\n");
    }

    return 0;
}