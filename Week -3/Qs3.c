#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printLargestWord(char line[]) {
    char largestWord[100];
    int maxLen = 0;

    char currentWord[100];
    int currentLen = 0;

    for (int i = 0; line[i] != '\0'; i++) {
        if (isalpha(line[i])) {
            currentWord[currentLen++] = line[i];
        } else {
            currentWord[currentLen] = '\0';  // Null-terminate the current word
            if (currentLen > maxLen) {
                maxLen = currentLen;
                strcpy(largestWord, currentWord);
            }
            currentLen = 0;  // Reset current word length for the next word
        }
    }

    currentWord[currentLen] = '\0';
    if (currentLen > maxLen) {
        strcpy(largestWord, currentWord);
    }

    printf("The largest word is: %s\n", largestWord);
}
int main() {
    char line[] = "This is an example sentence to find the largest word.";
    printLargestWord(line);
    return 0;
}

// OUTPUT
// The largest word is: sentence