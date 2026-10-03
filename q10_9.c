#include <stdio.h>

void sortAscending(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

void sortDescending(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) < *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) printf("%d ", *(arr + i));
    printf("\n");
}

int main() {
    int n, a[100];
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1) return 0;

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    sortAscending(a, n);
    printf("Ascending Order: ");
    printArray(a, n);

    sortDescending(a, n);
    printf("Descending Order: ");
    printArray(a, n);

    return 0;
}