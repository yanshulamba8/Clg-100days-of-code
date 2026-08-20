/* Write a program to calculate simple and compound interest for given principal, rate, and time. */

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;

    // Read input values
    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3) {
        return 1;
    }

    // Calculate Simple Interest
    double simple_interest = (principal * rate * time) / 100.0;

    // Calculate Compound Interest
    double amount = principal * pow((1.0 + rate / 100.0), time);
    double compound_interest = amount - principal;

    printf("Simple Interest=%g, Compound Interest=%.2g\n", simple_interest, compound_interest);

    return 0;
}
