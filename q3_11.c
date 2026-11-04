#include <stdio.h>

void compareVariables() {
    auto int autoVar = 5;
    static int staticVar = 5;

    printf("autoVar = %d, staticVar = %d\n", autoVar, staticVar);

    autoVar++;
    staticVar++;
}

int main() {
    compareVariables();
    compareVariables();
    compareVariables();

    return 0;
}