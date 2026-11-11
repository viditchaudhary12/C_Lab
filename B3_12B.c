#include <stdio.h>

struct Permissions {
    unsigned int read : 1;
    unsigned int write : 1;
    unsigned int execute : 1;
    unsigned int admin : 1;
};

int main() {
    struct Permissions p;
    unsigned int r, w, x, a;

    printf("Enter permissions for (Read, Write, Execute, Admin) as 0 or 1: ");
    if (scanf("%u %u %u %u", &r, &w, &x, &a) != 4) return 0;

    p.read = r;
    p.write = w;
    p.execute = x;
    p.admin = a;

    printf("Permissions format [rwxA]: ");
    printf("%c", p.read ? 'r' : '-');
    printf("%c", p.write ? 'w' : '-');
    printf("%c", p.execute ? 'x' : '-');
    printf("%c\n", p.admin ? 'A' : '-');

    return 0;
}