#include <stdio.h>
#include <stdlib.h>

#define MAX 20
int stack[MAX];
int top = -1;
void push(int value) {
    if (top >= MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = value;
}
int pop() {
    if (top < 0) {
        return 1;
    }
    return stack[top--];
}

int main() {
    int num;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Please enter a valid non-negative integer.\n");
        return 1;
    }
    int temp = num;
    while (temp > 1) {
        push(temp);
        temp--;
    }

    while (top >= 0) {
        factorial *= pop();
    }

    printf("Factorial of %d is: %lld\n", num, factorial);

    return 0;
}
