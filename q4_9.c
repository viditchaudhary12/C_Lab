#include <stdio.h>

int gcd2(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcd3(int a, int b, int c) {
    return gcd2(gcd2(a, b), c);
}

int lcm2(int a, int b) {
    return (a * b) / gcd2(a, b);
}

int lcm3(int a, int b, int c) {
    return lcm2(lcm2(a, b), c);
}

int main() {
    int a, b, c;
    printf("Enter three positive integers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 0;

    printf("GCD: %d\n", gcd3(a, b, c));
    printf("LCM: %d\n", lcm3(a, b, c));

    return 0;
}