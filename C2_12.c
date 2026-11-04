#include <stdio.h>

union Number {
    int i;
    float f;
};

int main() {
    union Number nums[3];

    nums[0].i = 10;
    nums[1].i = 20;
    nums[2].i = 30;

    printf("Initial array values (treated as int):\n");
    printf("nums[0].i = %d\n", nums[0].i);
    printf("nums[1].i = %d\n", nums[1].i);
    printf("nums[2].i = %d\n", nums[2].i);

    nums[1].f = 99.5f;

    printf("\nAfter overwriting second element with float:\n");
    printf("nums[0].i = %d\n", nums[0].i);
    printf("nums[1].f = %.2f\n", nums[1].f);
    printf("nums[2].i = %d\n", nums[2].i);

    return 0;
}