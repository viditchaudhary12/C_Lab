// File 1: main.c
#include <stdio.h>

void display();

int globalVar = 42;

int main() {
    printf("Inside main.c, globalVar = %d\n", globalVar);
    display();
    return 0;
}

// File 2: support.c
#include <stdio.h>

extern int globalVar;

void display() {
    printf("Inside support.c using extern, globalVar = %d\n", globalVar);
}