#include <stdio.h>

int main() {
    char src[100], dest[100];
    int i = 0;

    printf("Enter original string: ");
    if (fgets(src, sizeof(src), stdin) == NULL) {
        return 0;
    }

    while (src[i] != '\0') {
        if (src[i] == '\n') {
            src[i] = '\0';
            break;
        }
        i++;
    }

    i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    printf("Original string: %s\n", src);
    printf("Copied string: %s\n", dest);

    return 0;
}