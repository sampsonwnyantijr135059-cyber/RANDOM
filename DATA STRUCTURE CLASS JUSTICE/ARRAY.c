#include <stdio.h>

int main() {
    int size;

    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &size);

    int a[10];
    int b[20];
    int c[30];
    int sum[40];

    printf("\nEnter %d elements for the first array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }


    printf("\nEnter %d elements for the second array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &b[i]);
    }
     printf("\nEnter %d elements for the second array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < size; i++) {
        sum[i] = a[i] + b[i] + c[i];
    }

    printf("\nThe sum of array is:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");

    return 0;
}

