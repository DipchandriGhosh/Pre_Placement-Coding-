#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char* start, char* end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWordsInString(char* str) {
    char* word_start = NULL;
    char* temp = str; // Temp pointer to traverse the string

    // Reverse individual words in the string
    while (*temp) {
        if ((word_start == NULL) && !isspace(*temp)) {
            word_start = temp;
        }
        if (word_start && (isspace(*temp) || *(temp + 1) == '\0')) {
            reverseWord(word_start, (isspace(*temp) ? temp - 1 : temp));
            word_start = NULL;
        }
        temp++;
    }
}

int main() {
    char str[] = "C Programming Class";
    printf("Original string: %s\n", str);
    
    reverseWordsInString(str);
    
    printf("Reversed words string: %s\n", str);
    
    return 0;
}

// OUTPUT
// Original string: C Programming Class
// Reversed words string: C gnimmargorP ssalC