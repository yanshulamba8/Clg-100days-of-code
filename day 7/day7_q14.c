/* Write a program to input a character and check whether it is a vowel or consonant. */

#include <stdio.h>

int main() {
    char ch;

    // The space before %c handles any leading whitespace or newlines
    if (scanf(" %c", &ch) != 1) {
        return 1;
    }

    // Check for both lowercase and uppercase vowels
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }

    return 0;
}
