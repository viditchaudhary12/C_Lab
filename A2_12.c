#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float m1, m2, m3;
    float avg;
};

int main() {
    int n, i;
    float maxAvg = -1.0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks in 3 subjects: ");
        scanf("%f %f %f", &s[i].m1, &s[i].m2, &s[i].m3);
        s[i].avg = (s[i].m1 + s[i].m2 + s[i].m3) / 3.0;

        if (s[i].avg > maxAvg) {
            maxAvg = s[i].avg;
        }
    }

    printf("\n--- Students with Highest Average (%.2f) ---\n", maxAvg);
    for (i = 0; i < n; i++) {
        if (s[i].avg == maxAvg) {
            printf("Roll: %d, Name: %s, Average: %.2f\n", s[i].roll, s[i].name, s[i].avg);
        }
    }

    return 0;
}