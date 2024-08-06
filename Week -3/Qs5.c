#include <stdio.h>
#include <string.h>

// Function to swap characters
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Recursive function to reverse the string
void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return;
    }
    swap(&str[start], &str[end]);
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    reverseString(str, 0, strlen(str) - 1);
    printf("Reversed string: %s\n", str);

    return 0;
}

// OUTPUT
// Original string: Hello, World!
// Reversed string: !dlroW ,olleH