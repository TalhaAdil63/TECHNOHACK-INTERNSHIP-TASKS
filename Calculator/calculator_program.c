#include <stdio.h>

int main()
{
    char operator, playAgain;
    double num1, num2, result;

    do
    {
        // Introduction
        printf("Simple Calculator\n");

        // Input operator
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);

        // Input two numbers
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        // Perform calculations based on the operator
        switch (operator)
        {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 == 0)
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            else
            {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }
            break;
        default:
            printf("Invalid operator. Please use +, -, *, or /.\n");
        }

        // Ask if the user wants to perform another calculation
        printf("Do you want to perform another calculation? (Y/N): ");
        scanf(" %c", &playAgain);
        printf("\n");

    }
    while (playAgain == 'Y' || playAgain == 'y');

    return 0;
}
