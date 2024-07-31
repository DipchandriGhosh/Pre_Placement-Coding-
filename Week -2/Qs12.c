#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void unionArrays(int arr1[], int size1, int arr2[], int size2) {
    int result[1000]; // Assuming the maximum size of the union array is 1000
    int resultSize = 0;

    // Copy arr1 to result
    for (int i = 0; i < size1; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < resultSize; j++) {
            if (result[j] == arr1[i]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            result[resultSize++] = arr1[i];
        }
    }

    // Copy arr2 to result
    for (int i = 0; i < size2; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < resultSize; j++) {
            if (result[j] == arr2[i]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            result[resultSize++] = arr2[i];
        }
    }

    // Print the result
    printf("Union of the two arrays: ");
    printArray(result, resultSize);
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    unionArrays(arr1, size1, arr2, size2);

    return 0;
}
