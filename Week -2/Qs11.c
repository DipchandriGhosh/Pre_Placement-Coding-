#include <stdio.h>

// Function to calculate factorial of a number
long factorial(int n) {
    long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr (combination)
long combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to print Pascal's Triangle
void printPascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        // Print numbers in the row
        for (int j = 0; j <= i; j++) {
            printf("%ld ", combination(i, j));
        }
        printf("\n");
    }
}

int main() {
    int rows;

    // Taking input for the number of rows
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    // Printing Pascal's Triangle
    printPascalsTriangle(rows);

    return 0;
}
