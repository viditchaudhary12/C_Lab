#include <stdio.h>

int sumDigits(int n) {
    if (n < 0) n = -n;
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int countDigits(int n) {
    if (n == 0) return 1;
    if (n < 0) n = -n;
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int reverseNum(int n) {
    int rev = 0, temp = (n < 0) ? -n : n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return (n < 0) ? -rev : rev;
}

int isPalindrome(int n) {
    if (n < 0) return 0;
    return n == reverseNum(n);
}

int main() {
    int n;
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) return 0;

    printf("Sum of digits: %d\n", sumDigits(n));
    printf("Digit count: %d\n", countDigits(n));
    printf("Reversed: %d\n", reverseNum(n));
    printf("Palindrome: %s\n", isPalindrome(n) ? "Yes" : "No");

    return 0;
}