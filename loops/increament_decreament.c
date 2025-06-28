#include <stdio.h>

int main() {
    int x = 5, y = 5;

    // Pre-increment
    printf("Pre-increment: ++x = %d\n", ++x); // Increments x and then uses it.

    // Post-increment
    printf("Post-increment: y++ = %d\n", y++); // Uses y, then increments it.

    // Displaying the values after post-increment
    printf("After Post-increment, y = %d\n", y);

    // Pre-decrement
    printf("Pre-decrement: --x = %d\n", --x); // Decrements x and then uses it.

    // Post-decrement
    printf("Post-decrement: y-- = %d\n", y--); // Uses y, then decrements it.

    // Displaying the values after post-decrement
    printf("After Post-decrement, y = %d\n", y);

    return 0;
}
