#include <stdio.h>

int main() {
    int a[10], n = 5, i;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    n--;  // just reduce size

    printf("Array after deletion from end:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
