#include <stdio.h>

int main() {
    float numbers[3];
    float sum = 0.0;
    float average;


    printf("Enter 3 numbers:\n");


    for(int i = 0; i < 3; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }


    average = sum / 3;


    printf("\nSum = %.2f", sum);
    printf("\nAverage = %.2f\n", average);

    return 0;
}
