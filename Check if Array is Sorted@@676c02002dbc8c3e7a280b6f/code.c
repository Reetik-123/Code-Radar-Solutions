#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int k = 0; k < n; k++) {
        scanf("%d", &arr[k]);
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            printf("Not Sorted");
            return 0;
        }
    }

    printf("Sorted");
    return 0;
}
