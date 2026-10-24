#include <stdio.h>
#include <math.h>

int main() {
    double num1;
    double num2;

    printf("========================================\n");
    printf("              Calculator                \n");
    printf("========================================\n");

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("----------------------------------------\n");
    printf("Addition: %.2lf\n", num1 + num2);
    printf("Subtraction: %.2lf\n", num1 - num2);
    printf("Multiplication: %.2lf\n", num1 * num2);

    if (num2 != 0) {
        printf("Division: %.2lf\n", num1 / num2);
        printf("Modulus: %d\n", (int)num1 % (int)num2);
    } else {
        printf("Division: Undefined (Cannot divide by zero)\n");
        printf("Modulus: Undefined (Cannot divide by zero)\n");
    }

    printf("Power: %.2lf\n", pow(num1, num2));
    printf("========================================\n");

    return 0;
}