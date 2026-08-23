/* Write a program to find and display the sum of the first n natural numbers. */

#include <stdio.h>

int main() {
    int n;

    // Read input n
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    // Calculate sum using formula n * (n + 1) / 2
    int sum = n * (n + 1) / 2;

    // Output result
    printf("Sum=%d\n", sum);

    return 0;
}
