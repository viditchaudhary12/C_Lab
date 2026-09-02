#include <stdio.h>
int main() {
int a;
a = 10;
printf("Initial value of a = %d\n", a);
printf("Using ++a = %d\n", ++a);
printf("Value of a after ++a = %d\n", a);
a = 10;
printf("\nInitial value of a = %d\n", a);
printf("Using a++ = %d\n", a++);
printf("Value of a after a++ = %d\n", a);
a = 10;
printf("\nInitial value of a = %d\n", a);
printf("Using --a = %d\n", --a);
printf("Value of a after --a = %d\n", a);
a = 10;
printf("\nInitial value of a = %d\n", a);
printf("Using a-- = %d\n", a--);
printf("Value of a after a-- = %d\n", a);
return 0;
}