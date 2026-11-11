#include <stdio.h>

enum Day { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

int main() {
    int choice;
    printf("Enter a number (1-7) for the day: ");
    if (scanf("%d", &choice) != 1) return 0;

    switch (choice) {
        case MONDAY:    printf("Monday\n"); break;
        case TUESDAY:   printf("Tuesday\n"); break;
        case WEDNESDAY: printf("Wednesday\n"); break;
        case THURSDAY:  printf("Thursday\n"); break;
        case FRIDAY:    printf("Friday\n"); break;
        case SATURDAY:  printf("Saturday\n"); break;
        case SUNDAY:    printf("Sunday\n"); break;
        default:        printf("Invalid input! Please enter a number between 1 and 7.\n");
    }
    return 0;
}