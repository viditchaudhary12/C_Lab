#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight in kg: ");
    scanf("%f", &weight);

    printf("Enter height in metres: ");
    scanf("%f", &height);

    if (weight > 0 && height > 0) {
        bmi = weight / (height * height);
        printf("BMI = %.2f\n", bmi);

        if (bmi < 18.5)
            printf("Underweight");
        else if (bmi < 25)
            printf("Normal");
        else if (bmi < 30)
            printf("Overweight");
        else if (bmi < 35)
            printf("Obesity Class I");
        else if (bmi < 40)
            printf("Obesity Class II");
        else
            printf("Obesity Class III");
    }
    else {
        printf("Invalid weight or height");
    }

    return 0;
}