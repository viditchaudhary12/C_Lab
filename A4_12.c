#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float m1, m2, m3;
    char grade;
};

void displayStudent(struct Student s) {
    printf("Roll: %d, Name: %s, Marks: %.1f, %.1f, %.1f, Grade: %c\n",
           s.roll, s.name, s.m1, s.m2, s.m3, s.grade);
}

float totalMarks(struct Student s) {
    return s.m1 + s.m2 + s.m3;
}

void updateGrade(struct Student *s, char newGrade) {
    s->grade = newGrade;
}

int main() {
    struct Student s = {101, "Alice", 85.0, 90.0, 88.0, 'B'};

    printf("Before update:\n");
    displayStudent(s);
    printf("Total Marks: %.2f\n", totalMarks(s));

    updateGrade(&s, 'A');

    printf("\nAfter update:\n");
    displayStudent(s);

    return 0;
}