#include <stdio.h>

int main() {
    int a, b;
    a = 5;
    b = 6;

    printf("%d\n", (a > 2) && (b < 10));
    printf("%d\n", (a > 2) && (a > b));

    printf("%d\n", (a > 2) || (a > b));

    printf("%d\n", !(a > 2));

    return 0; // Added return statement for completeness
}