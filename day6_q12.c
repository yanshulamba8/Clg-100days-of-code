/* Write a program to input an integer and check whether it is positive, negative or zero using nested if-else. */

#include <stdio.h>

int main() {
    int num;

    if (scanf("%d", &num) != 1) {
        return 1;
    }

    // Using nested if-else
    if (num >= 0) {
        if (num == 0) {
            printf("Zero\n");
        } else {
            printf("Positive\n");
        }
    } else {
        printf("Negative\n");
    }

    return 0;
}
