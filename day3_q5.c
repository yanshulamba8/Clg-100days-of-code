/* Write a program to convert temperature from Celsius to Fahrenheit. */

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Read input Celsius temperature
    if (scanf("%f", &celsius) != 1) {
        return 1;
    }

    // Convert to Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Output formatted to match sample output
    printf("Fahrenheit=%.0f\n", fahrenheit);

    return 0;
}
