/* Write a program to calculate library fine based on late days. */

#include <stdio.h>

int main() {
    int days;

    if (scanf("%d", &days) != 1) {
        return 1;
    }

    if (days <= 0) {
        printf("Fine ₹0\n");
    } else if (days <= 5) {
        printf("Fine ₹%d\n", days * 2);
    } else if (days <= 10) {
        printf("Fine ₹%d\n", (5 * 2) + (days - 5) * 4);
    } else if (days <= 30) {
        printf("Fine ₹%d\n", (5 * 2) + (5 * 4) + (days - 10) * 6);
    } else {
        printf("Membership Cancelled\n");
    }

    return 0;
}
