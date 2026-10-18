#include <stdio.h>
void reverse(int arr[], int r, int n) {
    if (r >= n / 2) {
        return;
    }
    int temp = arr[r];
    arr[r] = arr[n - 1 - r];
    arr[n - 1 - r] = temp;
    reverse(arr, r + 1, n);
}
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    reverse(arr, 0, n);
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}