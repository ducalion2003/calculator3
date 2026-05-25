#include <stdio.h>

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
void printMenu();

int main() {
    double num1, num2, result;
    char operator;
    char choice;

    printf("=============================\n");
    printf("     Simple C Calculator     \n");
    printf("=============================\n");

    do {
        printMenu();

        printf("Enter first number: ");
        scanf("%lf", &num1);

        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &operator);

        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (operator) {
            case '+':
                result = add(num1, num2);
                printf("\nResult: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;

            case '-':
                result = subtract(num1, num2);
                printf("\nResult: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;

            case '*':
                result = multiply(num1, num2);
                printf("\nResult: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;

            case '/':
                if (num2 == 0) {
                    printf("\nError: Division by zero is not allowed!\n");
                } else {
                    result = divide(num1, num2);
                    printf("\nResult: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                }
                break;

            default:
                printf("\nError: Invalid operator! Please use +, -, *, /\n");
        }

        printf("\nDo you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);
        printf("\n");

    } while (choice == 'y' || choice == 'Y');

    printf("Thank you for using the calculator. Goodbye!\n");

    return 0;
}

// Function definitions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

void printMenu() {
    printf("-----------------------------\n");
    printf("  Operations: + | - | * | / \n");
    printf("-----------------------------\n");
}
