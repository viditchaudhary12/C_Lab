#include <stdio.h>

int main() {
    int n, key, count = 0;

    printf("Enter size: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Found at position: %d (Index %d)\n", i + 1, i);
            count++;
        }
    }

    if (count == 0) {
        printf("Element %d not found in the array\n", key);
    } else {
        printf("Total occurrences: %d\n", count);
    }

    return 0;
}