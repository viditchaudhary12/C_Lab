#include <stdio.h>
int main() {
    int a;
    float b, c;

    printf("Enter an integer number: ");
    scanf("%d", &a);
    printf("Enter a floating-point number: ");
    scanf("%f", &b);

    // ====== PART 1: IMPLICIT (Auto) ======
    printf("\n===== IMPLICIT TYPE CONVERSION (Auto) =====\n");
    c = a + b;
    printf("%d + %.2f = %.2f\n", a, b, c);
    c = a - b;
    printf("%d - %.2f = %.2f\n", a, b, c);
    c = a * b;
    printf("%d * %.2f = %.2f\n", a, b, c);
    c = a / b;
    printf("%d / %.2f = %.2f\n", a, b, c);

    // ====== PART 2: EXPLICIT (Manual Cast) ======
    printf("\n===== EXPLICIT TYPE CONVERSION (Manual) =====\n");
    // Here we force 'b' to become int using (int) so the decimal is CUT OFF
    printf("%d + (int)%.2f = %d\n", a, b, a + (int)b);
    printf("%d - (int)%.2f = %d\n", a, b, a - (int)b);
    printf("%d * (int)%.2f = %d\n", a, b, a * (int)b);
    printf("%d / (int)%.2f = %d\n", a, b, a / (int)b);

    return 0;
}