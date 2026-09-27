#include <stdio.h>

int main() {
    int n, pos, val;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size\n");
        return 0;
    }

    int arr[100];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert and position (1 to %d): ", n + 1);
    scanf("%d %d", &val, &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
    } else {
        for (int i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = val;
        n++;

        printf("Updated array: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

