#include <stdio.h>

int main()
{
    int marks;
    float percentage;
    char grade;

    const int totalMarks = 500;

    printf("Enter marks obtained out of 500: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > totalMarks)
    {
        printf("Invalid marks! Please enter marks between 0 and 500.\n");
        return 1;
    }
     percentage = (float)marks / totalMarks * 100;

    if (percentage >= 90)
    {
        grade = 'A';
        printf("Excellent\n");
    }
    else if (percentage >= 75)
    {
        grade = 'B';
        printf("Very Good\n");
    }
    else if (percentage >= 60)
    {
        grade = 'C';
        printf("Good\n");
    }
    else if (percentage >= 40)
    {
        grade = 'D';
        printf("Pass\n");
    }
    else
    {
        grade = 'F';
        printf("Fail\n");
    }

    printf("Percentage = %.2f%%\n", percentage);
    printf("Grade = %c\n", grade);
      return 0;
}