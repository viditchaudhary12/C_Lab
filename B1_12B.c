#include <stdio.h>

struct Flags {
    unsigned int isOn : 1;
    unsigned int isReady : 1;
};

int main() {
    struct Flags f;
    int tempOn, tempReady;

    printf("Enter isOn (0 or 1): ");
    if (scanf("%d", &tempOn) != 1) return 0;
    printf("Enter isReady (0 or 1): ");
    if (scanf("%d", &tempReady) != 1) return 0;

    if ((tempOn == 0 || tempOn == 1) && (tempReady == 0 || tempReady == 1)) {
        f.isOn = tempOn;
        f.isReady = tempReady;
        printf("\n--- Stored Bit-field Values ---\n");
        printf("isOn: %u\n", f.isOn);
        printf("isReady: %u\n", f.isReady);
    } else {
        printf("Invalid input! Please enter only 0 or 1.\n");
    }

    return 0;
}