#include <stdio.h>
int main()
{
    double num1, num2;

    // get input from user
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // arithmetic operations
    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;

    // print results
    printf("\nSum = %.0lf\n", sum);
    printf("Difference = %.0lf\n", difference);
    printf("Product = %.0lf\n", product);

    // Handle division by Zero
    if (num2 != 0)
    {
        double quotient = num1 / num2;
        printf("Quotient = %.2lf\n", quotient);
    }
    else
    {
        printf("Quotient = undefined (cannot divide by zero)\n");
    }
    return 0;
}