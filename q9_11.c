#include <stdio.h>

int globalVar = 42;

void demoAuto() {
    int var = 100;
    printf("auto: var = %d\n", var);
}

void demoStatic() {
    static int count = 0;
    count++;
    printf("static: count = %d\n", count);
}

void demoRegister() {
    register int i;
    int sum = 0;
    for (i = 1; i <= 5; i++) {
        sum += i;
    }
    printf("register: sum = %d\n", sum);
}

void demoExtern() {
    extern int globalVar;
    printf("extern: globalVar = %d\n", globalVar);
}

void demoShadowing() {
    int x = 10;
    printf("outer x = %d\n", x);
    {
        int x = 50;
        printf("inner x = %d\n", x);
    }
    printf("after block outer x = %d\n", x);
}

int main() {
    int i;

    printf("--- 1. Auto ---\n");
    for (i = 0; i < 2; i++) {
        demoAuto();
    }

    printf("\n--- 2. Static Counter ---\n");
    for (i = 0; i < 3; i++) {
        demoStatic();
    }

    printf("\n--- 3. Register ---\n");
    demoRegister();

    printf("\n--- 4. Extern ---\n");
    demoExtern();

    printf("\n--- 5. Shadowing ---\n");
    demoShadowing();

    return 0;
}