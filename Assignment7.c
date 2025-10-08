#include <stdio.h>

int main()
{
    int num1, num2, num3;

    // Getting Input from the User
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find The largest number
    int largest = num1;

    if (num2 > largest)
    {
        largest = num2;
    }
    if (num3 > largest)
    {
        largest = num3;
    }

    // printing the result
    printf("the largest number is %d\n", largest);

    return 0;
}