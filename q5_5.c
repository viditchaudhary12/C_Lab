#include <stdio.h>

int main() {
    int choice;
    float balance = 5000, amount, rate, time, interest;

    do {
        printf("\n----- Bank Menu -----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Calculate Simple Interest\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Balance = %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount: ");
                scanf("%f", &amount);
                balance = balance + amount;
                printf("Balance = %.2f\n", balance);
                break;

            case 3:
                printf("Enter amount: ");
                scanf("%f", &amount);
                if (amount > balance)
                    printf("Insufficient balance\n");
                else {
                    balance = balance - amount;
                    printf("Balance = %.2f\n", balance);
                }
                break;

            case 4:
                printf("Enter principal amount: ");
                scanf("%f", &amount);
                printf("Enter rate: ");
                scanf("%f", &rate);
                printf("Enter time in years: ");
                scanf("%f", &time);
                interest = (amount * rate * time) / 100;
                printf("Simple Interest = %.2f\n", interest);
                break;

            case 5:
                printf("Thank you\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 5);

    return 0;
}