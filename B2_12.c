#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    int roll;
    char name[50];
    float cgpa;
    Date dob;
} Student;

void displayStudent(Student *s) {
    printf("Roll: %d, Name: %s, CGPA: %.2f, DOB: %02d/%02d/%d",
           s->roll, s->name, s->cgpa, s->dob.day, s->dob.month, s->dob.year);
    if (s->cgpa >= 8.5) {
        printf(" [Eligible for Merit Scholarship]\n");
    } else {
        printf(" [Not Eligible]\n");
    }
}

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    Student s[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
        printf("Date of Birth (DD MM YYYY): ");
        scanf("%d %d %d", &s[i].dob.day, &s[i].dob.month, &s[i].dob.year);
    }

    printf("\n--- Scholarship Eligibility Report ---\n");
    for (i = 0; i < n; i++) {
        displayStudent(&s[i]);
    }

    return 0;
}