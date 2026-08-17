/* Q1: Write a program to input two numbers and display their sum. */

#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Sum: %.2f\n", num1 + num2);

    return 0;
}
