#include <stdio.h>

enum MenuChoice { ADD = 1, SUBTRACT, MULTIPLY, DIVIDE, EXIT };

int main() {
    int choice;
    double a, b;

    do {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) break;

        if (choice == EXIT) {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            if (scanf("%lf %lf", &a, &b) != 2) break;
        }

        switch ((enum MenuChoice)choice) {
            case ADD:
                printf("Result: %.2f\n", a + b);
                break;
            case SUBTRACT:
                printf("Result: %.2f\n", a - b);
                break;
            case MULTIPLY:
                printf("Result: %.2f\n", a * b);
                break;
            case DIVIDE:
                if (b == 0.0) {
                    printf("Error: Division by zero is not allowed!\n");
                } else {
                    printf("Result: %.2f\n", a / b);
                }
                break;
            default:
                printf("Invalid choice! Please select between 1 and 5.\n");
        }
    } while (choice != EXIT);

    return 0;
}