#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter size of first array: ");
    if (scanf("%d", &n1) != 1 || n1 <= 0) return 0;

    int a[n1];
    printf("Enter %d elements for first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    if (scanf("%d", &n2) != 1 || n2 <= 0) return 0;

    int b[n2];
    printf("Enter %d elements for second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    int merged[n1 + n2];

    // Copy first array into merged array
    for (int i = 0; i < n1; i++) {
        merged[i] = a[i];
    }

    // Copy second array into merged array
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = b[i];
    }

    // Display merged array
    printf("\nMerged Array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
