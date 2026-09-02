#include <stdio.h>
int main()
{
int age, creditScore;
float income;
printf("Enter age: ");
scanf("%d", &age);
printf("Enter income: ");
scanf("%f", &income);
printf("Enter credit score: ");
scanf("%d", &creditScore);
if (age >= 21 && age <= 60 && income > 35000 && creditScore >= 750)
{
printf("Person is eligible for loan\n");
}
else
{
printf("Person is not eligible for loan\n");
}
return 0;
}