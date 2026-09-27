#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Need at least 2 elements\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int max1 = arr[0], max2 = -999999;
    int min1 = arr[0], min2 = 999999;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }

        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
        }
    }

    printf("Largest: %d\nSecond Largest: %d\n", max1, max2);
    printf("Smallest: %d\nSecond Smallest: %d\n", min1, min2);

    return 0;
}