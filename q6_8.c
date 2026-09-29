#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    if (fgets(str1, sizeof(str1), stdin) == NULL) return 0;
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    if (fgets(str2, sizeof(str2), stdin) == NULL) return 0;
    str2[strcspn(str2, "\n")] = '\0';

    printf("Length of string 1: %zu\n", strlen(str1));
    printf("Length of string 2: %zu\n", strlen(str2));

    int res = strcmp(str1, str2);
    if (res == 0) {
        printf("Both strings are equal.\n");
    } else if (res < 0) {
        printf("\"%s\" comes first lexicographically.\n", str1);
    } else {
        printf("\"%s\" comes first lexicographically.\n", str2);
    }

    return 0;
}