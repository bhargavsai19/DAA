#include <stdio.h>

// Function to find the largest element in an array
int findLargestElement(int arr[], int size) {
    int largest = arr[0]; // Assume the first element is the largest

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update the largest element
        }
    }

    return largest;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int largestElement = findLargestElement(arr, size);

    printf("The largest element in the array is: %d\n", largestElement);

    return 0;
}
