#include <stdio.h>

int main() {
    int amount, notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count[9] = {0}, i;
    printf("Enter amount: ");
    scanf("%d", &amount);

    for (i = 0; i < 9; i++) {
        if (amount >= notes[i]) {
            count[i] = amount / notes[i];
            amount = amount % notes[i];
        }
    }

    printf("Minimum notes required:\n");
    for (i = 0; i < 9; i++) {
        if (count[i] > 0)
            printf("%d notes of %d Rs.\n", count[i], notes[i]);
    }
    return 0;
}
