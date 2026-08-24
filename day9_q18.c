/* Write a program that accepts a percentage (0-100) and assigns a grade. */

#include <stdio.h>

int main() {
    int percentage;

    if (scanf("%d", &percentage) != 1) {
        return 1;
    }

    if (percentage >= 90 && percentage <= 100) {
        printf("Grade A\n");
    } else if (percentage >= 80) {
        printf("Grade B\n");
    } else if (percentage >= 70) {
        printf("Grade C\n");
    } else if (percentage >= 60) {
        printf("Grade D\n");
    } else {
        printf("Grade F\n");
    }

    return 0;
}
