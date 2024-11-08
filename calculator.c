#include <stdio.h>

// Function declarations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    char operator;
    double num1, num2, result;

    // Display options
    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &operator);

    // Input two numbers
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform calculation based on operator
    switch (operator) {
        case '+':
            result = add(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            result = divide(num1, num2);
            if (num2 != 0) {
                printf("Result: %.2lf\n", result);
            }
            break;
        default:
            printf("Invalid operator.\n");
            break;
    }

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
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
}
