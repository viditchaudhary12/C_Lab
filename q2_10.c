#include <stdio.h>
int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    int fn = fib(n - 1) + fib(n - 2);
    return fn;
}
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++) {
        int term = fib(i);
        printf("%d ", term);
    }
    printf("\n");
    return 0;
}