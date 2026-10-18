#include <stdio.h>
#include <limits.h>

void findMaxAndCount(int arr[], int n, int i, int *maxVal, int *count) {
    if (i == n) {
        return;
    }

    if (arr[i] > *maxVal) {
        *maxVal = arr[i];
        *count = 1;
    } else if (arr[i] == *maxVal) {
        (*count)++;
    }

    findMaxAndCount(arr, n, i + 1, maxVal, count);
}

int main() {
    int n;
    
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxVal = INT_MIN;
    int count = 0;

    findMaxAndCount(arr, n, 0, &maxVal, &count);

    printf("Maximum element: %d\n", maxVal);
    printf("Occurrence count: %d\n", count);

    return 0;
}