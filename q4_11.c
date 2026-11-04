#include <stdio.h>

void countFunctionCalls() {
    static int count = 0;
    count++;
    printf("Function called %d times\n", count);
}

int main() {
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    return 0;
}