#include <stdio.h>

int main() {
    int a[10], n, i, direction;
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter number of positions to shift: ");
    scanf("%d", &n);
    printf("1. Left shift\n2. Right shift\nEnter choice: ");
    scanf("%d", &direction);

    if (direction == 1) {  // Left shift
        for (i = 0; i < 10 - n; i++) {
            a[i] = a[i + n];
        }
        for (i = 10 - n; i < 10; i++) {
            a[i] = 0;
        }
    } else {  // Right shift
        for (i = 9; i >= n; i--) {
            a[i] = a[i - n];
        }
        for (i = 0; i < n; i++) {
            a[i] = 0;
        }
    }

    printf("Array after shift:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
