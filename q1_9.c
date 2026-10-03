#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
float div_op(int a, int b) { return (b != 0) ? (float)a / b : 0; }
int mod_op(int a, int b) { return (b != 0) ? a % b : 0; }

int main() {
    int x, y;
    printf("Enter two integers: ");
    if (scanf("%d %d", &x, &y) != 2) return 0;

    printf("Addition: %d\n", add(x, y));
    printf("Subtraction: %d\n", sub(x, y));
    printf("Multiplication: %d\n", mul(x, y));
    
    if (y != 0) {
        printf("Division: %.2f\n", div_op(x, y));
        printf("Modulus: %d\n", mod_op(x, y));
    } else {
        printf("Division and Modulus by zero are undefined.\n");
    }
    return 0;
}