#include <stdio.h>

int main() {
    int n;

    printf("Enter order of square matrix (N x N): ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int A[n][n];

    printf("Enter elements of Matrix (%dx%d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int sumMain = 0, sumOpp = 0;

    for (int i = 0; i < n; i++) {
        sumMain += A[i][i];
        sumOpp += A[i][n - 1 - i];
    }

    printf("Main Diagonal Sum: %d\n", sumMain);
    printf("Opposite Diagonal Sum: %d\n", sumOpp);

    return 0;
}