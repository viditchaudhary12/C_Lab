#include <stdio.h>

int checkSymmetric(int n, int arr[n][n], int i, int j) {
    if (i >= n) {
        return 1;
    }
    if (j >= n) {
        return checkSymmetric(n, arr, i + 1, i + 2);
    }
    if (arr[i][j] != arr[j][i]) {
        return 0;
    }
    return checkSymmetric(n, arr, i, j + 1);
}

int main() {
    int n;
    int i;
    int j;
    int result;

    printf("Enter order of matrix (n): ");
    scanf("%d", &n);

    int arr[n][n];
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    result = checkSymmetric(n, arr, 0, 1);

    if (result) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}