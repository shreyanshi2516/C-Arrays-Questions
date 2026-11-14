#include <stdio.h>

int main() {
    int a[11], n = 5, value, i;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter value to insert at end: ");
    scanf("%d", &value);

    a[n] = value;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
