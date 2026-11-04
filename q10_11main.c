// File 2: main.c
#include <stdio.h>

extern void deposit(double amount);
extern void withdraw(double amount);
extern double getBalance();

int main() {
    printf("Initial Balance: %.2f\n", getBalance());
    deposit(500.0);
    printf("After Deposit: %.2f\n", getBalance());
    withdraw(200.0);
    printf("After Withdrawal: %.2f\n", getBalance());
    return 0;
}