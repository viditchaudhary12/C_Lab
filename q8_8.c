#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;
    str[strcspn(str, "\n")] = '\0';

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    char *ptr = strchr(str, ch);

    if (ptr != NULL) {
        printf("Character '%c' found at position %ld\n", ch, ptr - str);
    } else {
        printf("Character '%c' not found.\n", ch);
    }

    return 0;
}