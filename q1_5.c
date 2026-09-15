#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter day, month and year: ");
    scanf("%d %d %d", &day, &month, &year);

    if (year > 0) {
        if (month >= 1 && month <= 12) {
            if (month == 1 || month == 3 || month == 5 || month == 7 ||
                month == 8 || month == 10 || month == 12) {
                if (day >= 1 && day <= 31)
                    printf("Valid date\n");
                else
                    printf("Invalid date\n");
            }
            else if (month == 4 || month == 6 || month == 9 || month == 11) {
                if (day >= 1 && day <= 30)
                    printf("Valid date\n");
                else
                    printf("Invalid date\n");
            }
            else if (month == 2) {
                if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
                    if (day >= 1 && day <= 29)
                        printf("Valid date\n");
                    else
                        printf("Invalid date\n");
                }
                else {
                    if (day >= 1 && day <= 28)
                        printf("Valid date\n");
                    else
                        printf("Invalid date\n");
                }
            }
        }
        else {
            printf("Invalid month\n");
        }
    }
    else {
        printf("Invalid year\n");
    }

    return 0;
}