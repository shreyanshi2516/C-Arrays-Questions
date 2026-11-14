#include <stdio.h>

int main() {
    int a[11], n = 5, value, pos, i;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter value to insert: ");
    scanf("%d", &value);
    printf("Enter position (0 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position\n");
        return 0;
    }

    for (i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos] = value;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
