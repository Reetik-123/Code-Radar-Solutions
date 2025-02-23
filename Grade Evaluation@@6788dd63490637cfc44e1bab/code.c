// Your code here...
#include <stdio.h>

int main() {
    char grade;
    scanf("%c", &grade);

    // Check the grade and print corresponding description
    if (grade == 'A' || grade == 'a') {
        printf("Excellent\n");
    } else if (grade == 'B' || grade == 'b') {
        printf("Good\n");
    } else if (grade == 'C' || grade == 'c') {
        printf("Average\n");
    } else if (grade == 'D' || grade == 'd') {
        printf("Below Average\n");
    } else if (grade == 'F' || grade == 'f') {
        printf("Fail\n");
    } else {
        printf("Invalid grade! Please enter A, B, C, D, or F.\n");
    }

    return 0;
}
