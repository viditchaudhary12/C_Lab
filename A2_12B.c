#include <stdio.h>

enum Result { FAIL, PASS, DISTINCTION };

enum Result evaluateResult(float avg) {
    if (avg >= 75.0f) return DISTINCTION;
    else if (avg >= 40.0f) return PASS;
    else return FAIL;
}

int main() {
    float avg;
    printf("Enter student average marks: ");
    if (scanf("%f", &avg) != 1) return 0;

    enum Result res = evaluateResult(avg);

    printf("Result Status Numeric: %d\n", res);
    printf("Result Status Label: ");
    switch (res) {
        case DISTINCTION: printf("DISTINCTION\n"); break;
        case PASS:        printf("PASS\n"); break;
        case FAIL:        printf("FAIL\n"); break;
    }
    return 0;
}