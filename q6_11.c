#include <stdio.h>

static int internalVar = 100;

void showVar() {
    printf("Inside showVar function: internalVar = %d\n", internalVar);
}

int main() {
    printf("Inside main function: internalVar = %d\n", internalVar);
    showVar();
    return 0;
}