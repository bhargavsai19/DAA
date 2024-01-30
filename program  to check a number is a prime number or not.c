#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false; // 1 and non-positive numbers are not prime
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // If n is divisible by any number between 2 and sqrt(n), it's not prime
        }
    }

    return true; // If no divisor found, the number is prime
}

int main() {
    int num;

    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
