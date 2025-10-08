#include <stdio.h>

int main()
{
    int num1, num2;
    // A program fro Arithmetic Operations using integer input obtaining from user

    printf("Enter your First Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    // perfoming calculations and displaying out results
    printf("\nSum =%d\n", num1 + num2);
    printf("\nDifference =%d\n",num1-num2);
    printf("\nproduct =%d\n",num1*num2);
    printf("\nAddition =%d\n",num1+num2);

    // Interger division with Zero check
    if (num2 != 0)
    {
        printf("quotient =%d\n", num1 / num2);
    }
    else
    {
        printf("quotient = Error: Division y Zero\n");
    }

    return 0;
}