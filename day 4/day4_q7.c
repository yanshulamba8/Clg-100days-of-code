/* Write a program to swap two numbers without using a third variable. */

#include <stdio.h>

int main() {
    int a, b;

    // Read input numbers
    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    // Swap arithmetic logic
    a = a + b;
    b = a - b;
    a = a - b;

    // Output formatted to match sample output
    printf("After swap: %d %d\n", a, b);

    return 0;
}
