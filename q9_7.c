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

    // Display matrix in standard form
    printf("\n2D Array (Matrix Form):\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
