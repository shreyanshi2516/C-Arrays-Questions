#include <stdio.h>

int main() {
    int a[10], n = 5, i;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;

    printf("Array after deletion from beginning:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
