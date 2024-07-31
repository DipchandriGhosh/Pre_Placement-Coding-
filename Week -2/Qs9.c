#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    int vowel_count = 0;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';
    for (int i = 0; sentence[i] != '\0'; i++) {
        char ch = tolower(sentence[i]); // Convert character to lowercase
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowel_count++;
        }
    }
    printf("Number of vowels in the sentence: %d\n", vowel_count);

    return 0;
}
