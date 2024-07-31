#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    int word_count = 0;
    int in_word = 0; // Flag to indicate if we are inside a word

    // Taking input for the sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character if present
    sentence[strcspn(sentence, "\n")] = '\0';

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isspace(sentence[i])) {
            in_word = 0; // We are not inside a word
        } else if (!in_word) {
            in_word = 1; // We have found a new word
            word_count++;
        }
    }
    printf("Number of words in the sentence: %d\n", word_count);

    return 0;
}
