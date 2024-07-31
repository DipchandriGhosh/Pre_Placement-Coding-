#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[100];
    int length, is_palindrome = 1;
    printf("Enter a word: ");
    scanf("%s", word);
    for (int i = 0; word[i]; i++) {
        word[i] = tolower(word[i]);
    }
    length = strlen(word);
    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome) {
        printf("The word is a palindrome.\n");
    } else {
        printf("The word is not a palindrome.\n");
    }

    return 0;
}
