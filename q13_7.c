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

    int isIdentity = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && A[i][j] != 1) {
                isIdentity = 0;
                break;
            }
            if (i != j && A[i][j] != 0) {
                isIdentity = 0;
                break;
            }
        }
        if (!isIdentity) break;
    }

    if (isIdentity) {
        printf("Identity Matrix\n");
    } else {
        printf("Not an Identity Matrix\n");
    }

    return 0;
}