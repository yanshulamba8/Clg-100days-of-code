/* Write a program to input a year and check whether it is a leap year or not. */

#include <stdio.h>

int main() {
    int year;

    if (scanf("%d", &year) != 1) {
        return 1;
    }

    // A year is leap if divisible by 400 OR (divisible by 4 AND NOT divisible by 100)
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }

    return 0;
}
