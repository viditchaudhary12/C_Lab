#include <stdio.h>

int main() {
    char str1[200], str2[100];
    int i = 0, j = 0;

    printf("Enter first string: ");
    if (fgets(str1, sizeof(str1), stdin) == NULL) return 0;
    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }

    printf("Enter second string: ");
    if (fgets(str2, sizeof(str2), stdin) == NULL) return 0;
    while (str2[j] != '\0') {
        if (str2[j] == '\n') {
            str2[j] = '\0';
            break;
        }
        j++;
    }

    j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    printf("Concatenated string: %s\n", str1);

    return 0;
}