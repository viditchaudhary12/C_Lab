#include <stdio.h>

typedef struct {
    int roll;
    char name[50];
    float cgpa;
} Student;

int main() {
    Student s[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    printf("\n--- Student Records ---\n");
    for (i = 0; i < 3; i++) {
        printf("Roll: %d, Name: %s, CGPA: %.2f\n", s[i].roll, s[i].name, s[i].cgpa);
    }

    return 0;
}