#include <stdio.h>

int globalVar = 50;

void demoAuto() {
    int var = 100;
    printf("Inside function block (auto): var = %d, address = %p\n", var, (void*)&var);
}

void demoStatic() {
    static int count = 0;
    count++;
    printf("Inside function (static): count = %d\n", count);
}

void demoRegister() {
    register int i;
    int sum = 0;
    
    for (i = 1; i <= 5; i++) {
        sum += i;
    }
    
    printf("Inside function (register): Sum of first 5 numbers = %d\n", sum);
}

void demoExtern() {
    extern int globalVar;
    printf("Inside function (extern): globalVar = %d\n", globalVar);
}

int main() {
    int i;

    printf("--- 1. Automatic Storage Class (auto) ---\n");
    {
        int x = 10;
        printf("Inside inner block: x = %d, address = %p\n", x, (void*)&x);
    }
    printf("After exiting inner block, x is destroyed.\n");
    
    for (i = 0; i < 2; i++) {
        demoAuto();
    }

    printf("\n--- 2. Static Storage Class (static) ---\n");
    for (i = 0; i < 3; i++) {
        demoStatic();
    }

    printf("\n--- 3. Register Storage Class (register) ---\n");
    demoRegister();

    printf("\n--- 4. External Storage Class (extern) ---\n");
    demoExtern();

    return 0;
}