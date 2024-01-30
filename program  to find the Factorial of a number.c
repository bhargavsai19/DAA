#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: 0! and 1! are both 1
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(num);
        printf("Factorial of %d is: %d\n", num, result);
    }

    return 0;
}
