#include <stdio.h>

float calcTotal(float m1, float m2, float m3, float m4, float m5) {
    return m1 + m2 + m3 + m4 + m5;
}

float calcPercentage(float total) {
    return total / 5.0;
}

int passedAll(float m1, float m2, float m3, float m4, float m5) {
    return (m1 >= 40 && m2 >= 40 && m3 >= 40 && m4 >= 40 && m5 >= 40);
}

char getGrade(float pct, int passed) {
    if (!passed) return 'F';
    if (pct >= 90) return 'A';
    if (pct >= 75) return 'B';
    if (pct >= 60) return 'C';
    if (pct >= 50) return 'D';
    return 'E';
}

int main() {
    float m1, m2, m3, m4, m5;
    printf("Enter marks for 5 subjects: ");
    if (scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5) != 5) return 0;

    float total = calcTotal(m1, m2, m3, m4, m5);
    float pct = calcPercentage(total);
    int passed = passedAll(m1, m2, m3, m4, m5);
    char grade = getGrade(pct, passed);

    printf("\nTotal Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", pct);
    printf("Status: %s\n", passed ? "Passed" : "Failed");
    printf("Grade: %c\n", grade);

    return 0;
}