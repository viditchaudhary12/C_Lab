#include <stdio.h>
int a = 10; // global variable
int main() {
int b = 20; // local variable
static int c = 30; // static variable
printf("Inside main before block:\n");
printf("Global variable a = %d\n", a);
printf("Local variable b = %d\n", b);
printf("Static variable c = %d\n", c);
{
int b = 50; // local variable inside block
a = a + 5;
b = b + 5;
c = c + 5;
printf("\nInside block:\n");
printf("Global variable a = %d\n", a);
printf("Block local variable b = %d\n", b);
printf("Static variable c = %d\n", c);
}
printf("\nInside main after block:\n");
printf("Global variable a = %d\n", a);
printf("Local variable b = %d\n", b);
printf("Static variable c = %d\n", c);
return 0;
}