/* Write a program to calculate the area and perimeter of a rectangle given its length and breadth. */

#include <stdio.h>

int main() {
    int length, breadth;
    
    // Read input values
    if (scanf("%d %d", &length, &breadth) != 2) {
        return 1;
    }
    
    // Calculate area and perimeter
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    
    // Output format matches sample test cases
    printf("Area=%d, Perimeter=%d\n", area, perimeter);
    
    return 0;
}
