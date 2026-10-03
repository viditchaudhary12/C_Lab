#include <stdio.h>

void calculate(int a, int b, int *sum, int *diff, int *prod, float *quot) {
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;
    if (b != 0) {
        *quot = (float)a / b;
    } else {
        *quot = 0;
    }
}

int main() {
    int a, b, sum, diff, prod;
    float quot;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) return 0;

    calculate(a, b, &sum, &diff, &prod, &quot);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    if (b != 0) {
        printf("Quotient: %.2f\n", quot);
    } else {
        printf("Quotient: Division by zero is undefined.\n");
    }

    return 0;
}