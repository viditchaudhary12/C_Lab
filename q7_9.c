#include <stdio.h>

void cyclicSwap(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int a, b, c;

    printf("Enter three values:\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("Before Swapping: a = %d, b = %d, c = %d\n", a, b, c);
    cyclicSwap(&a, &b, &c);
    printf("After Swapping:  a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}