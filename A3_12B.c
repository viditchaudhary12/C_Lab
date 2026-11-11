#include <stdio.h>

enum Type { INT_VALUE, FLOAT_VALUE, CHAR_VALUE };

struct TaggedValue {
    enum Type tag;
    union {
        int i;
        float f;
        char c;
    } data;
};

void printValue(struct TaggedValue tv) {
    switch (tv.tag) {
        case INT_VALUE:
            printf("Stored Integer: %d\n", tv.data.i);
            break;
        case FLOAT_VALUE:
            printf("Stored Float: %.2f\n", tv.data.f);
            break;
        case CHAR_VALUE:
            printf("Stored Character: %c\n", tv.data.c);
            break;
        default:
            printf("Unknown type tag.\n");
    }
}

int main() {
    struct TaggedValue v1 = {INT_VALUE, .data.i = 42};
    struct TaggedValue v2 = {FLOAT_VALUE, .data.f = 3.14f};
    struct TaggedValue v3 = {CHAR_VALUE, .data.c = 'X'};

    printValue(v1);
    printValue(v2);
    printValue(v3);
    return 0;
}