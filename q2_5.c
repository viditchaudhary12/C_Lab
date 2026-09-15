#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation\n");
    }
    else {
        d = b * b - 4 * a * c;

        if (d > 0) {
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("Real and distinct roots\n");
            printf("Root 1 = %.2f\n", r1);
            printf("Root 2 = %.2f\n", r2);
        }
        else if (d == 0) {
            r1 = r2 = -b / (2 * a);
            printf("Real and equal roots\n");
            printf("Root 1 = Root 2 = %.2f\n", r1);
        }
        else {
            printf("Imaginary roots\n");
        }
    }

    return 0;
}