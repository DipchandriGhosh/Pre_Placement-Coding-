#include <stdio.h>

int stringLength(char src[]) {
    int length = 0;

    // Traverse the string until we encounter the null terminator
    while (src[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char myString[] = "Hello, world!";
    printf("The length of the string is: %d\n", stringLength(myString));
    return 0;
}

// OUTPUT
// The length of the string is: 13