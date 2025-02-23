// Your code here...
#include <stdio.h>

int main() {
    char light;
    scanf("%c", &light);

    // Check the input and display the corresponding action
    if (light == 'R' || light == 'r') {
        printf("Stop\n");
    } else if (light == 'G' || light == 'g') {
        printf("Go\n");
    } else if (light == 'Y' || light == 'y') {
        printf("Slow Down\n");
    } else {
        printf("Invalid input");
    }

    return 0;
}
