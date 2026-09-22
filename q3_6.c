#include <stdio.h>

int main() {
    int reverse = 0, d, n, m;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    m = n;
    while(n > 0) {
        d = n % 10;
        reverse = reverse * 10 + d;
        n = n / 10;
    }
    if(m == reverse) {
        printf("%d is a palindrome number.\n", m);
    } else {
        printf("%d is not a palindrome number.\n", m);
    }
    return 0;
}