#include <stdio.h>
int main()
{
int a, b, c, d, e, f, g;
int result1, result2;
printf("Enter values of a, b, c, d, e, f, g: ");
scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
if (e == 0)
{
printf("Division by zero error\n");
}
else if (g == 0)
{
printf("Modulus by zero error\n");
}
else
{
result1 = a + b * c - d / e + f % g;
result2 = a + (b * c) - (d / e) + (f % g);
printf("Result1 = %d\n", result1);
printf("Result2 = %d\n", result2);
if (result1 == result2)
{
printf("Operator precedence is verified\n");
}
else
{
printf("Operator precedence is not verified\n");
}
}
return 0;
}