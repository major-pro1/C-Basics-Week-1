#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Simple Calculator in C\n");
    printf("----------------------\n");
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero is not allowed.\n");
                return 1; // Exit program due to error
            }
            printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            break;

        default:
            printf("Error: Invalid operator!\n");
            return 1;
    }

    return 0;
}
