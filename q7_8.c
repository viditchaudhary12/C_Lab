#include <stdio.h>
#include <string.h>

int main() {
    char firstName[50], lastName[50], fullName[105];

    printf("Enter first name: ");
    if (fgets(firstName, sizeof(firstName), stdin) == NULL) return 0;
    firstName[strcspn(firstName, "\n")] = '\0';

    printf("Enter last name: ");
    if (fgets(lastName, sizeof(lastName), stdin) == NULL) return 0;
    lastName[strcspn(lastName, "\n")] = '\0';

    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    printf("Full name: %s\n", fullName);

    return 0;
}