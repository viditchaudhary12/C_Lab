#include <stdio.h>

int main() {
    int r, c;

    printf("Enter rows and columns: ");
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0) return 0;

    int A[r][c], T[c][r];

    printf("Enter elements of Matrix (%dx%d):\n", r, c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            T[j][i] = A[i][j];
        }
    }

    printf("Transpose Matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}