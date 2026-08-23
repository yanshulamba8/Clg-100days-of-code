/* Write a program to calculate the area and circumference of a circle given its radius. */

#include <stdio.h>

int main() {
    float radius, area, circumference;
    const float PI = 3.14159f;

    // Read radius
    if (scanf("%f", &radius) != 1) {
        return 1;
    }

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Output formatted to 2 decimal places
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}
