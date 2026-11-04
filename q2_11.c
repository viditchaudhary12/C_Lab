#include <stdio.h>

int x = 100;

void display() {
    printf("Value of global x from function: %d\n", x);
}

int main() {
    int x = 10;

    printf("Value of local x in main: %d\n", x);
    display();

    return 0;
}