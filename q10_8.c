#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    int count = 0;

    printf("Enter a sentence: ");
    if (fgets(sentence, sizeof(sentence), stdin) == NULL) return 0;
    sentence[strcspn(sentence, "\n")] = '\0';

    char *token = strtok(sentence, " ");

    printf("\nWords:\n");
    while (token != NULL) {
        printf("%s\n", token);
        count++;
        token = strtok(NULL, " ");
    }

    printf("\nTotal number of words: %d\n", count);

    return 0;
}