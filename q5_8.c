#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int len = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

    while (str[len] != '\0') {
        if (str[len] == '\n') {
            str[len] = '\0';
            break;
        }
        len++;
    }

    for (int i = 0; i < len; i++) {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }
        freq[(unsigned char)ch]++;
    }

    printf("Character frequencies:\n");
    for (int i = 0; i < len; i++) {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }
        if (freq[(unsigned char)ch] > 0) {
            printf("'%c': %d\n", ch, freq[(unsigned char)ch]);
            freq[(unsigned char)ch] = 0;
        }
    }

    return 0;
}