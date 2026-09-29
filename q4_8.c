#include <stdio.h>

int main() {
    char str[100];
    int len = 0, isPalindrome = 1;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

    while (str[len] != '\0') {
        if (str[len] == '\n') {
            str[len] = '\0';
            break;
        }
        len++;
    }

    for (int i = 0; i < len / 2; i++) {
        char c1 = str[i];
        char c2 = str[len - 1 - i];

        if (c1 >= 'A' && c1 <= 'Z') c1 = c1 + 32;
        if (c2 >= 'A' && c2 <= 'Z') c2 = c2 + 32;

        if (c1 != c2) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}