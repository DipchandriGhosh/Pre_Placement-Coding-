#include <stdio.h>

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to find the intersection of two arrays
void intersectionArrays(int arr1[], int size1, int arr2[], int size2) {
    int result[1000]; // Assuming the maximum size of the intersection array is 1000
    int resultSize = 0;

    // Finding common elements
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                // Check if the element is already in the result array
                int isDuplicate = 0;
                for (int k = 0; k < resultSize; k++) {
                    if (result[k] == arr1[i]) {
                        isDuplicate = 1;
                        break;
                    }
                }
                if (!isDuplicate) {
                    result[resultSize++] = arr1[i];
                }
            }
        }
    }

    // Print the result
    printf("Intersection of the two arrays: ");
    printArray(result, resultSize);
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 4, 2};
    int arr2[] = {4, 5, 6, 7, 8, 4, 3};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    intersectionArrays(arr1, size1, arr2, size2);

    return 0;
}
