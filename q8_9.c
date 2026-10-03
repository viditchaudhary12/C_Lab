#include <stdio.h>

void display(int a[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

void insert(int a[], int *n, int val, int pos) {
    if (pos < 0 || pos > *n) {
        printf("Invalid index.\n");
        return;
    }
    for (int i = *n; i > pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos] = val;
    (*n)++;
    printf("Inserted %d at index %d.\n", val, pos);
}

int deleteElement(int a[], int *n, int pos) {
    if (pos < 0 || pos >= *n) {
        printf("Invalid index.\n");
        return -1;
    }
    int deleted = a[pos];
    for (int i = pos; i < *n - 1; i++) {
        a[i] = a[i + 1];
    }
    (*n)--;
    return deleted;
}

int main() {
    int a[100], n, choice, val, pos;

    printf("Enter initial array size: ");
    if (scanf("%d", &n) != 1) return 0;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    while (1) {
        printf("\n--- MENU ---\n1. Display\n2. Insert\n3. Delete\n4. Exit\nEnter choice: ");
        if (scanf("%d", &choice) != 1 || choice == 4) break;

        switch (choice) {
            case 1:
                display(a, n);
                break;
            case 2:
                printf("Enter value and index position: ");
                scanf("%d %d", &val, &pos);
                insert(a, &n, val, pos);
                break;
            case 3:
                printf("Enter index position to delete: ");
                scanf("%d", &pos);
                val = deleteElement(a, &n, pos);
                if (val != -1) printf("Deleted value: %d\n", val);
                break;
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}