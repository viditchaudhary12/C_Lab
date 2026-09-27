#include <stdio.h>

int main() {
    int r, c;

    printf("Enter rows and columns: ");
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0) return 0;

    int A[r][c];

    printf("Enter elements of Matrix (%dx%d):\n", r, c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nRow sums:\n");
    for (int i = 0; i < r; i++) {
        int rSum = 0;
        for (int j = 0; j < c; j++) {
            rSum += A[i][j];
        }
        printf("Row %d sum: %d\n", i + 1, rSum);
    }

    printf("\nColumn sums:\n");
    for (int j = 0; j < c; j++) {
        int cSum = 0;
        for (int i = 0; i < r; i++) {
            cSum += A[i][j];
        }
        printf("Column %d sum: %d\n", j + 1, cSum);
    }

    return 0;
}