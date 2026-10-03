#include <stdio.h>

int isEven(int n) { return n % 2 == 0; }
int checkSign(int n) { return (n > 0) ? 1 : (n < 0 ? -1 : 0); }

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int isPerfect(int n) {
    if (n <= 0) return 0;
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) sum += i;
    }
    return sum == n;
}

int main() {
    int n;
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) return 0;

    printf("\n--- Classification Report ---\n");
    printf("Number: %d\n", n);
    printf("Parity: %s\n", isEven(n) ? "Even" : "Odd");
    
    int s = checkSign(n);
    printf("Sign: %s\n", s > 0 ? "Positive" : (s < 0 ? "Negative" : "Zero"));
    printf("Prime: %s\n", isPrime(n) ? "Yes" : "No");
    printf("Perfect: %s\n", isPerfect(n) ? "Yes" : "No");

    return 0;
}