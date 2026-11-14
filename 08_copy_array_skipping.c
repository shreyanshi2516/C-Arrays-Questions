#include <stdio.h>

int main() {
    int a[5], b[10] = {0}, i, j = 0;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    // Copy skipping one position
    for (i = 0; i < 5; i++) {
        b[j] = a[i];
        j += 2;
    }
    printf("New array of 10 elements:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}
