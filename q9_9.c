#include <stdio.h>

int analyzeArray(int a[], int n, int *small, int *s_small, int *great, int *s_great) {
    int max1 = -1000000, max2 = -1000000;
    int min1 = 1000000, min2 = 1000000;

    for (int i = 0; i < n; i++) {
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2 && a[i] != max1) {
            max2 = a[i];
        }

        if (a[i] < min1) {
            min2 = min1;
            min1 = a[i];
        } else if (a[i] < min2 && a[i] != min1) {
            min2 = a[i];
        }
    }

    if (max2 == -1000000 || min2 == 1000000) return 0;

    *great = max1;
    *s_great = max2;
    *small = min1;
    *s_small = min2;
    return 1;
}

int main() {
    int n, a[100];
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Fewer than two distinct values exist.\n");
        return 0;
    }

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int small, s_small, great, s_great;
    if (analyzeArray(a, n, &small, &s_small, &great, &s_great)) {
        printf("Smallest: %d\n", small);
        printf("Second Smallest: %d\n", s_small);
        printf("Greatest: %d\n", great);
        printf("Second Greatest: %d\n", s_great);
    } else {
        printf("Fewer than two distinct values exist.\n");
    }

    return 0;
}