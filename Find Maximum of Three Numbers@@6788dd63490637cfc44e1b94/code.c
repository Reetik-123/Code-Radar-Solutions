#include <stdio.h>

int main() {
    int a, b, c;
    
    // Input three numbers
    scanf("%d %d %d", &a, &b, &c);

    // Find and print the largest number
    if ((a >= b) && (a >= c)) {
        printf("%d", a);  // a is the largest or equal to the others
    } else if (b >= c) {
        printf("%d", b);  // b is the largest or equal to c
    } else {
        printf("%d", c);  // c is the largest
    }

    return 0;
}
