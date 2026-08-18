/* Write a program to swap two numbers using a third variable. */

#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Read two input numbers
    if (scanf("%d %d", &num1, &num2) != 2) {
        return 1;
    }

    // Swap using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Output swapped values
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
