#include <stdio.h>

struct OrdinaryFlags {
    unsigned int flag1;
    unsigned int flag2;
    unsigned int flag3;
    unsigned int flag4;
};

struct BitFieldFlags {
    unsigned int flag1 : 1;
    unsigned int flag2 : 1;
    unsigned int flag3 : 1;
    unsigned int flag4 : 1;
};

int main() {
    printf("Size of ordinary structure: %zu bytes\n", sizeof(struct OrdinaryFlags));
    printf("Size of bit-field structure: %zu bytes\n", sizeof(struct BitFieldFlags));
    printf("Explanation: Bit-fields pack multiple boolean flags into fewer bits, whereas ordinary structures allocate full standard integers for each member.\n");
    return 0;
}