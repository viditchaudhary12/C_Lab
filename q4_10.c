#include <stdio.h>
#include <limits.h>
void SecondLargest(int arr[], int n, int i, int *l, int *sl) {
    if (i == n) {
        return;
    }

    if (arr[i] > *l) {
        *sl = *l;
        *l = arr[i];
    } else if (arr[i] > *sl && arr[i] != *l) {
        *sl = arr[i];
    }

    SecondLargest(arr, n, i + 1, l, sl);
}

int main() {
    int n;
    
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Fewer than two distinct elements exist.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int l = INT_MIN;
    int sl = INT_MIN;

    SecondLargest(arr, n, 0, &l, &sl);

    if (sl == INT_MIN) {
        printf("Fewer than two distinct elements exist.\n");
    } else {
        printf("Second largest distinct element: %d\n", sl);
    }

    return 0;
}