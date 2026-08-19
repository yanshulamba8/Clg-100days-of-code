/* Write a program to input two numbers and display their sum, difference, product, and quotient.
   Division by zero should be handled carefully. */

#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("\n--- Results ---\n");
    printf("Sum        : %.2f\n", num1 + num2);
    printf("Difference : %.2f\n", num1 - num2);
    printf("Product    : %.2f\n", num1 * num2);

    // Handle division by zero
    if (num2 != 0) {
        printf("Quotient   : %.2f\n", num1 / num2);
    } else {
        printf("Quotient   : Error! Division by zero is not allowed.\n");
    }

    return 0;
}	
