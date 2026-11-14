#include <stdio.h>

int main() {
    int a[5], i, j, temp, choice;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    printf("1. Ascending\n2. Descending\nEnter choice: ");
    scanf("%d", &choice);

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (choice == 1) {
                if (a[i] > a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            } else {
                if (a[i] < a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
