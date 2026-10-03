#include <stdio.h>

void analyzeString(char *str, int *v, int *c, int *d, int *s, int *sp) {
    *v = *c = *d = *s = *sp = 0;
    int i = 0;

    while (*(str + i) != '\0') {
        char ch = *(str + i);
        if (ch == '\n') {
            i++;
            continue;
        }

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            char lower = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                (*v)++;
            } else {
                (*c)++;
            }
        } else if (ch >= '0' && ch <= '9') {
            (*d)++;
        } else if (ch == ' ' || ch == '\t') {
            (*s)++;
        } else {
            (*sp)++;
        }
        i++;
    }
}

int main() {
    char str[200];
    int v, c, d, s, sp;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

    analyzeString(str, &v, &c, &d, &s, &sp);

    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);
    printf("Digits: %d\n", d);
    printf("Spaces: %d\n", s);
    printf("Special Characters: %d\n", sp);

    return 0;
}