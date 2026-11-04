// File 1: bank.c
#include <stdio.h>

static double balance = 1000.0;

void deposit(double amount) {
    balance += amount;
}

void withdraw(double amount) {
    balance -= amount;
}

double getBalance() {
    return balance;
}