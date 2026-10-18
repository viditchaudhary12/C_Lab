#include <stdio.h>
#include <limits.h>

int getColumnSum(int r, int mat[100][100], int i, int j) {
    if (i == r) {
        return 0;
    }
    return mat[i][j] + getColumnSum(r, mat, i + 1, j);
}

void findMinCol(int r, int c, int mat[100][100], int j, int *minSum, int *minCol) {
    if (j == c) {
        return;
    }
    
    int currentSum = getColumnSum(r, mat, 0, j);
    
    if (currentSum < *minSum) {
        *minSum = currentSum;
        *minCol = j;
    }
    
    findMinCol(r, c, mat, j + 1, minSum, minCol);
}

int main() {
    int r;
    int c;
    int i;
    int j;
    int mat[100][100];
    int minSum = INT_MAX;
    int minCol = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    findMinCol(r, c, mat, 0, &minSum, &minCol);

    printf("Column with minimum sum is column %d with sum %d\n", minCol + 1, minSum);

    return 0;
}