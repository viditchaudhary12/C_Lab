#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float m1, m2, m3;
};

int main() {
    struct Student s = {101, "Alice", 85.0f, 90.0f, 78.5f};
    float total = s.m1 + s.m2 + s.m3;
    float avg = total / 3.0f;
    char grade = (avg >= 90) ? 'A' : (avg >= 75) ? 'B' : (avg >= 60) ? 'C' : 'D';

    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", avg);
    printf("Grade: %c\n", grade);
    return 0;
}
