#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* convertToBase(int decimal, int base) {
    // Array to store base characters
    static char baseChars[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    // Check for valid base
    if (base < 2 || base > 36) {
        return NULL;
    }

    // Allocate memory for the result
    char* result = (char*)malloc(33 * sizeof(char)); // 32 digits + null terminator
    if (result == NULL) {
        return NULL;
    }

    // Temporary buffer to store digits in reverse order
    char buffer[33];
    int index = 0;

    // Handle the special case of zero
    if (decimal == 0) {
        buffer[index++] = '0';
    } else {
        // Convert the decimal number to the given base
        while (decimal > 0) {
            buffer[index++] = baseChars[decimal % base];
            decimal /= base;
        }
    }

    buffer[index] = '\0';

    // Reverse the buffer to get the correct result
    int length = index;
    for (int i = 0; i < length; i++) {
        result[i] = buffer[length - i - 1];
    }
    result[length] = '\0';

    return result;
}

int main() {
    int decimal = 255;
    int base = 16;

    char* result = convertToBase(decimal, base);
    if (result != NULL) {
        printf("The number %d in base %d is: %s\n", decimal, base, result);
        free(result); // Free the allocated memory
    } else {
        printf("Invalid base or memory allocation failure.\n");
    }

    return 0;
}

// OUTPUT
// The number 255 in base 16 is: FF