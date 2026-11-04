#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date doj;
};

int main() {
    struct Employee emp[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        printf("Date of joining (DD MM YYYY): ");
        scanf("%d %d %d", &emp[i].doj.day, &emp[i].doj.month, &emp[i].doj.year);
    }

    printf("\n--- Employee Details ---\n");
    for (i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f, Joining Date: %02d/%02d/%d\n",
               emp[i].id, emp[i].name, emp[i].salary,
               emp[i].doj.day, emp[i].doj.month, emp[i].doj.year);
    }

    return 0;
}