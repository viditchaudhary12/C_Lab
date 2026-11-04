#include <stdio.h>

struct Employee {
    int id;
    union {
        int hourly_rate;
        float monthly_salary;
    };
};

int main() {
    struct Employee e1;
    struct Employee e2;

    e1.id = 101;
    e1.monthly_salary = 5500.50f;

    e2.id = 102;
    e2.hourly_rate = 50;

    printf("Employee 1 - ID: %d, Monthly Salary: %.2f\n", e1.id, e1.monthly_salary);
    printf("Employee 2 - ID: %d, Hourly Rate: %d\n", e2.id, e2.hourly_rate);

    return 0;
}