#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], word[50];

    printf("Enter a sentence: ");
    if (fgets(sentence, sizeof(sentence), stdin) == NULL) return 0;
    sentence[strcspn(sentence, "\n")] = '\0';

    printf("Enter word to search: ");
    if (fgets(word, sizeof(word), stdin) == NULL) return 0;
    word[strcspn(word, "\n")] = '\0';

    char *ptr = strstr(sentence, word);

    if (ptr != NULL) {
        printf("Word \"%s\" found starting at position %ld\n", word, ptr - sentence);
    } else {
        printf("Word \"%s\" not found in sentence.\n", word);
    }

    return 0;
}