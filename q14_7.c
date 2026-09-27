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

    printf("\nUpper Triangular Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i <= j) {
                printf("%d ", A[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    printf("\nLower Triangular Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i >= j) {
                printf("%d ", A[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}