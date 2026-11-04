#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data d;

    d.i = 25;
    printf("d.i = %d\n", d.i);

    d.f = 7.5f;
    printf("d.f = %.2f\n", d.f);

    d.c = 'A';
    printf("d.c = %c\n", d.c);

    printf("Size of union Data = %lu bytes\n", sizeof(union Data));

    return 0;
}