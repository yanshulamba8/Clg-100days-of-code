/* Write a program to find profit or loss percentage given cost price and selling price. */

#include <stdio.h>

int main() {
    double cp, sp;

    if (scanf("%lf %lf", &cp, &sp) != 2) {
        return 1;
    }

    if (sp > cp) {
        double profit_percent = ((sp - cp) / cp) * 100.0;
        printf("Profit %g%%\n", profit_percent);
    } else if (cp > sp) {
        double loss_percent = ((cp - sp) / cp) * 100.0;
        printf("Loss %g%%\n", loss_percent);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
