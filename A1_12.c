#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float m1, m2, m3;
};

int main() {
    struct Student s;
    float total, avg;
    char grade;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter marks in 3 subjects: ");
    scanf("%f %f %f", &s.m1, &s.m2, &s.m3);

    total = s.m1 + s.m2 + s.m3;
    avg = total / 3.0;

    if (avg >= 90) grade = 'A';
    else if (avg >= 75) grade = 'B';
    else if (avg >= 60) grade = 'C';
    else if (avg >= 50) grade = 'D';
    else grade = 'F';

    printf("\n--- Student Record ---\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", avg);
    printf("Grade: %c\n", grade);

    return 0;
}