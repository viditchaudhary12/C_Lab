#include <stdio.h>
int main()
{
int m1, m2, m3;
float average;
printf("Enter marks of three subjects: ");
scanf("%d %d %d", &m1, &m2, &m3);
average = (m1 + m2 + m3) / 3.0;
if (m1 >= 40 && m2 >= 40 && m3 >= 40)
{
printf("Student passed all subjects\n");
if (average >= 75)
{
printf("Student scored distinction\n");
}
else
{
printf("Student did not score distinction\n");
}
}
else
{
printf("Student failed in one or more subjects\n");
}
printf("Average marks = %.2f\n", average);
return 0;
}