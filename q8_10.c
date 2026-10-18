#include <stdio.h>

void multiply(int r1, int c1, int A[100][100], int r2, int c2, int B[100][100], int C[100][100], int i, int j, int k) {
    if (i >= r1) return;

    if (j >= c2) {
        multiply(r1, c1, A, r2, c2, B, C, i + 1, 0, 0);
        return;
    }

    if (k >= c1) {
        multiply(r1, c1, A, r2, c2, B, C, i, j + 1, 0);
        return;
    }

    C[i][j] += A[i][k] * B[k][j];
    multiply(r1, c1, A, r2, c2, B, C, i, j, k + 1);
}

int main() {
    int A[100][100], B[100][100], C[100][100] = {0}; 
    int r1, c1, r2, c2;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrices cannot be multiplied.\n");
        return 0;
    }

    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    multiply(r1, c1, A, r2, c2, B, C, 0, 0, 0);

    printf("Resultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
